/* IL2CPP: Dino.BusSand.AudioHub$$get_VoiceCount
int32_t Dino_BusSand_AudioHub__get_VoiceCount (Dino_BusSand_AudioHub_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.AudioHub$$get_VoiceCount
   int32_t Dino_BusSand_AudioHub__get_VoiceCount (Dino_BusSand_AudioHub_o* __this, const MethodInfo*
   method); */

undefined4 Dino_BusSand_AudioHub__get_VoiceCount_2374910(long param_1)

{
                    /* try { // try from 02474924 to 02574927 has its CatchHandler @ 02474930 */
  if ((bRam0000000004f9c7ea & 1) == 0) {
                    /* try { // try from 02474928 to 0257494f has its CatchHandler @ 0247469c */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02474810 with catch @ 0247492c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02474924 with catch @ 02474930
                        */
    FUN_02132f7c(PTR_DAT_04cbb1f8);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024747d8 with catch @ 02474934
                        */
    bRam0000000004f9c7ea = 1;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
                    /* try { // try from 02474950 to 02574953 has its CatchHandler @ 0247496c */
    return *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x18);
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02474954 to 0257496f has its CatchHandler @ 0247469c */
  FUN_02133224();
}

