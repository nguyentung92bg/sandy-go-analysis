/* IL2CPP: Dino.BusSand.App.UI.ChestPanel.<>c__DisplayClass15_1$$<Burst>b__1
void Dino_BusSand_App_UI_ChestPanel___c__DisplayClass15_1___Burst_b__1 (Dino_BusSand_App_UI_ChestPanel___c__DisplayClass15_1_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.ChestPanel.<>c__DisplayClass15_1$$<Burst>b__1
   void Dino_BusSand_App_UI_ChestPanel___c__DisplayClass15_1___Burst_b__1
   (Dino_BusSand_App_UI_ChestPanel___c__DisplayClass15_1_o* __this, float k, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_ChestPanel___c__DisplayClass15_1___Burst_b__1_2327c6c
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c5f1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c5f1 = 1;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar4 = *(long *)(param_2 + 0x10);
  if (lVar4 != 0) {
    fVar6 = (float)param_1;
    fVar5 = (float)func_0x049b5320(fVar6 * _UNK_00e2082c);
    fVar7 = (float)*(undefined8 *)(param_2 + 0x18);
    fVar8 = (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
    fVar5 = fVar8 + ((float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20) - fVar8) * fVar6 +
            fVar5 * 150.0;
    UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
              (CONCAT44(fVar5,fVar7 + ((float)*(undefined8 *)(param_2 + 0x20) - fVar7) * fVar6 + 0.0
                       ),fVar5,lVar4,0);
    lVar4 = *(long *)(param_2 + 0x10);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_UI_UiMotion__OutBack_2287cfc(param_1,0x40000000,0);
    if (lVar4 != 0) {
      if ((bRam0000000004fa8b3e & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf7a00,0);
        bRam0000000004fa8b3e = 1;
      }
      if (lVar4 != 0) {
        lVar4 = *(long *)(lVar4 + 0x10);
        if (lVar4 != 0) {
          if (pcRam0000000004fa8bf0 == (code *)0x0) {
            pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
          }
          (*pcRam0000000004fa8bf0)(lVar4,&stack0xffffffffffffffd4);
          return;
        }
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

