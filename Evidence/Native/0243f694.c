/* IL2CPP: Dino.BusSand.Cheat.AutoPlayHand$$Place
void Dino_BusSand_Cheat_AutoPlayHand__Place (Dino_BusSand_Cheat_AutoPlayHand_o* __this, UnityEngine_Vector2_o p, float press, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.AutoPlayHand$$Place
   void Dino_BusSand_Cheat_AutoPlayHand__Place (Dino_BusSand_Cheat_AutoPlayHand_o* __this,
   UnityEngine_Vector2_o p, float press, const MethodInfo* method); */

void Dino_BusSand_Cheat_AutoPlayHand__Place_233f694
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  long lVar1;
  long lVar2;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  if (*(long *)(param_4 + 0x28) != 0) {
    UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(*(long *)(param_4 + 0x28),0);
    if (*(long *)(param_4 + 0x30) != 0) {
      UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                (param_3 * -14.0,param_3 * 14.0,*(long *)(param_4 + 0x30),0);
      lVar2 = *(long *)(param_4 + 0x30);
      if (cRam0000000004f9b65e == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65e = '\x01';
      }
      if (lVar2 != 0) {
        lVar1 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
        fStack_28 = param_3 * _UNK_00e207d8 + 1.0;
        fStack_2c = fStack_28 * *(float *)(lVar1 + 0xc);
        fStack_24 = fStack_28 * *(float *)(lVar1 + 0x14);
        fStack_28 = fStack_28 * *(float *)(lVar1 + 0x10);
        if ((bRam0000000004fa8b3e & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf7a00,0);
          bRam0000000004fa8b3e = 1;
        }
        if (lVar2 != 0) {
          lVar2 = *(long *)(lVar2 + 0x10);
          if (lVar2 != 0) {
            if (pcRam0000000004fa8bf0 == (code *)0x0) {
              pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
            }
            (*pcRam0000000004fa8bf0)(lVar2,&fStack_2c);
            return;
          }
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

