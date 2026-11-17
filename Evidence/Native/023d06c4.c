/* IL2CPP: Dino.BusSand.App.UI.CommonNamePlateView$$RefreshNamePlate
void Dino_BusSand_App_UI_CommonNamePlateView__RefreshNamePlate (Dino_BusSand_App_UI_CommonNamePlateView_o* __this, System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommonNamePlateView$$RefreshNamePlate
   void Dino_BusSand_App_UI_CommonNamePlateView__RefreshNamePlate
   (Dino_BusSand_App_UI_CommonNamePlateView_o* __this, System_String_o* name, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_CommonNamePlateView__RefreshNamePlate_22d06c4(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  if ((bRam0000000004f9c3a7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9c3a7 = 1;
  }
  Dino_BusSand_App_UI_CommonNamePlateView__Setup_22cfd58(param_1);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar4 = *(long *)PTR_DAT_04ca9c30;
  if (param_2 != 0) {
    lVar4 = param_2;
  }
  plVar6 = (long *)(param_1 + 0x50);
  *plVar6 = lVar4;
  thunk_FUN_02134474(plVar6);
  Dino_BusSand_App_UI_CommonNamePlateView__SetTexts_22d0430(*(undefined8 *)(param_1 + 0x28),*plVar6)
  ;
  puVar2 = PTR_DAT_04ca9ae8;
  lVar4 = *(long *)(param_1 + 0x30);
  lVar5 = *plVar6;
  if ((bRam0000000004f9c3ac & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cada48);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c3ac = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar4,0,0);
  if ((uVar3 & 1) == 0) {
    if ((lVar4 == 0) ||
       (lVar4 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                          (lVar4,1,*(undefined8 *)PTR_DAT_04cada48), lVar4 == 0)) {
LAB_023d052c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      lVar7 = 0;
      do {
        if (uVar1 <= (uint)lVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar6 = *(long **)(lVar4 + 0x20 + lVar7 * 8);
        if (plVar6 == (long *)0x0) goto LAB_023d052c;
        TMPro_TMP_Text__set_richText_42ccfa8(plVar6,0,0);
        (**(code **)(*plVar6 + 0x518))(plVar6,lVar5,*(undefined8 *)(*plVar6 + 0x520));
        uVar1 = *(uint *)(lVar4 + 0x18);
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < (int)uVar1);
    }
  }
  return;
}

