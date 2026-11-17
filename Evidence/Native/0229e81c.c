/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleWaitPanel$$SetNum
void Dino_BusSand_App_UI_BattleRoyaleWaitPanel__SetNum (Dino_BusSand_App_UI_BattleRoyaleWaitPanel_o* __this, int32_t n, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleWaitPanel$$SetNum
   void Dino_BusSand_App_UI_BattleRoyaleWaitPanel__SetNum
   (Dino_BusSand_App_UI_BattleRoyaleWaitPanel_o* __this, int32_t n, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleWaitPanel__SetNum_219e81c(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  undefined4 uVar11;
  
  puVar3 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ba0d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabd10);
    FUN_02132f7c(PTR_DAT_04cae618);
    bRam0000000004f9ba0d = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
  if ((uVar5 & 1) == 0) {
    iVar2 = *(int *)(param_1 + 0x54);
    if (iVar2 <= param_2) {
      if (((1 < param_2) && (iVar2 < param_2)) &&
         (fVar10 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0),
         _UNK_00e20754 < fVar10 - *(float *)(param_1 + 0x5c))) {
        uVar11 = UnityEngine_Time__get_unscaledTime_43cd610(0);
        puVar3 = PTR_DAT_04cab1e8;
        *(undefined4 *)(param_1 + 0x5c) = uVar11;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cae618,0);
      }
      lVar9 = *(long *)(param_1 + 0x48);
      *(int *)(param_1 + 0x54) = param_2;
      uVar8 = System_Int32__ToString_482d750((int *)(param_1 + 0x54),0);
      uVar6 = System_Int32__ToString_482d750(param_1 + 0x50,0);
      uVar8 = System_String__Concat_46d2b84(uVar8,*(undefined8 *)PTR_DAT_04cabd10,uVar6,0);
      puVar3 = PTR_DAT_04ca9ae8;
      if ((bRam0000000004f9b9f8 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cada48);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004f9b9f8 = 1;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar9,0,0);
      if ((uVar5 & 1) == 0) {
        if ((lVar9 == 0) ||
           (lVar9 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                              (lVar9,1,*(undefined8 *)PTR_DAT_04cada48), lVar9 == 0)) {
LAB_0229a1f0:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (0 < (int)uVar1) {
          lVar7 = 0;
          do {
            if (uVar1 <= (uint)lVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            plVar4 = *(long **)(lVar9 + 0x20 + lVar7 * 8);
            if (plVar4 == (long *)0x0) goto LAB_0229a1f0;
            (**(code **)(*plVar4 + 0x518))(plVar4,uVar8,*(undefined8 *)(*plVar4 + 0x520));
            uVar1 = *(uint *)(lVar9 + 0x18);
            lVar7 = lVar7 + 1;
          } while ((int)lVar7 < (int)uVar1);
        }
      }
      return;
    }
  }
  return;
}

