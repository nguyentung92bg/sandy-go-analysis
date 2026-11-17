/* IL2CPP: Dino.BusSand.AudioHub.Voice$$get_Busy
bool Dino_BusSand_AudioHub_Voice__get_Busy (Dino_BusSand_AudioHub_Voice_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.AudioHub.Voice$$get_Busy
   bool Dino_BusSand_AudioHub_Voice__get_Busy (Dino_BusSand_AudioHub_Voice_o* __this, const
   MethodInfo* method); */

bool Dino_BusSand_AudioHub_Voice__get_Busy_2374a9c(long param_1)

{
  bool bVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = UnityEngine_AudioSource__get_isPlaying_4348a28(*(long *)(param_1 + 0x10),0);
    if ((uVar2 & 1) == 0) {
                    /* try { // try from 02474ac4 to 02574aef has its CatchHandler @ 024749e4 */
      fVar4 = *(float *)(param_1 + 0x3c);
      fVar3 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
      bVar1 = fVar3 < fVar4;
    }
    else {
      bVar1 = true;
    }
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02474a90 with catch @ 02474ad8
                        */
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

