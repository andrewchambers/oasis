cflags{
	'-std=c99', '-Wall', '-Wpedantic',
	'-Wno-format-truncation',
	'-D _GNU_SOURCE',
	'-I $srcdir/libsndio',
	'-I $srcdir/bsd-compat',
	'-isystem $builddir/pkg/tinyalsa/include',
	'-include $dir/config.h',
}

pkg.deps = {
	'pkg/tinyalsa/headers',
}
pkg.hdrs = copy('$outdir/include', '$srcdir/libsndio', {'sndio.h'})

-- everything but mio.c and sio.c
local objs = objects[[
	libsndio/(
		debug.c aucat.c
		mio.c mio_aucat.c
		sio_aucat.c
		sioctl.c sioctl_aucat.c
	)
	bsd-compat/(issetugid.c strlcat.c strlcpy.c strtonum.c clock_gettime.c)
	$builddir/pkg/tinyalsa/libtinyalsa.a
]]

-- build mio.c and sio.c for sndiod with alsa support
for _, src in ipairs{'sio.c', 'sio_alsa.c'} do
	build('cc', '$outdir/sndiod/'..src..'.o', {'$srcdir/libsndio/'..src, '||', '$gendir/deps'}, {
		cflags='$cflags -D USE_ALSA',
	})
end
lib('libsndio.a', {objs, 'libsndio/sio.c'})

exe('bin/sndiod', {objs, paths[[
	sndiod/(
		abuf.c utils.c dev.c dev_sioctl.c dsp.c file.c listen.c midi.c miofile.c
		opt.c siofile.c sndiod.c sock.c

		sio.c.o sio_alsa.c.o
	)
	$builddir/pkg/tinyalsa/libtinyalsa.a
]]})
file('bin/sndiod', '755', '$outdir/bin/sndiod')
man{'sndiod/sndiod.8'}

exe('bin/sndioctl', 'sndioctl/sndioctl.c libsndio.a')
file('bin/sndioctl', '755', '$outdir/bin/sndioctl')
man{'sndioctl/sndioctl.1'}

exe('bin/aucat', 'aucat/(abuf.c afile.c aucat.c dsp.c utils.c) libsndio.a')
file('bin/aucat', '755', '$outdir/bin/aucat')
man{'aucat/aucat.1'}

fetch 'git'
