/* IL2CPP: Dino.BusSand.AudioHub$$StopMusic
void Dino_BusSand_AudioHub__StopMusic (Dino_BusSand_AudioHub_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.AudioHub$$StopMusic
   void Dino_BusSand_AudioHub__StopMusic (Dino_BusSand_AudioHub_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_AudioHub__StopMusic_23770d8(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x78);
  if (lVar3 != 0) {
    uVar2 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar2) {
      lVar4 = 0;
      do {
        if (uVar2 <= (uint)lVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        lVar1 = *(long *)(lVar3 + 0x20 + lVar4 * 8);
        if (lVar1 == 0) goto LAB_02477150;
        UnityEngine_AudioSource__Stop_43488b8(lVar1,0);
        uVar2 = *(uint *)(lVar3 + 0x18);
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < (int)uVar2);
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x88),0);
    *(undefined4 *)(param_1 + 0x94) = 0;
    return;
  }
LAB_02477150:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

