/* IL2CPP: Dino.BusSand.App.UI.CommonNamePlateView$$InitPlayer
void Dino_BusSand_App_UI_CommonNamePlateView__InitPlayer (Dino_BusSand_App_UI_CommonNamePlateView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommonNamePlateView$$InitPlayer
   void Dino_BusSand_App_UI_CommonNamePlateView__InitPlayer
   (Dino_BusSand_App_UI_CommonNamePlateView_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_CommonNamePlateView__InitPlayer_22cffb0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  
  if ((bRam0000000004f9c3a4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4720);
    FUN_02132f7c(PTR_DAT_04cb6c48);
    FUN_02132f7c(PTR_DAT_04cae570);
    bRam0000000004f9c3a4 = 1;
  }
  puVar2 = PTR_DAT_04cae570;
  Dino_BusSand_App_UI_CommonNamePlateView__Setup_22cfd58(param_1);
  puVar3 = PTR_DAT_04cb4720;
  if (*(char *)(param_1 + 0x59) == '\0') {
    *(undefined1 *)(param_1 + 0x59) = 1;
    uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
    System_Action_Int32Enum____ctor_35ef240(uVar5,param_1,*(undefined8 *)PTR_DAT_04cb6c48,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_PlayerIdentity__add_Changed_226bbd4(uVar5,0);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = Dino_BusSand_App_Meta_PlayerIdentity__get_PlayerName_225b990(0);
  puVar8 = (undefined8 *)(param_1 + 0x50);
  *puVar8 = uVar5;
  thunk_FUN_02134474(puVar8,uVar5);
  uVar4 = Dino_BusSand_App_Meta_PlayerIdentity__get_NamePlate_226d250(0);
  Dino_BusSand_App_UI_CommonNamePlateView__LoadNamePlate_22d00b0(param_1,uVar4);
  puVar2 = PTR_DAT_04ca9ae8;
  lVar6 = *(long *)(param_1 + 0x28);
  uVar5 = *puVar8;
  if ((bRam0000000004f9c3ac & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cada48);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c3ac = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
  if ((uVar7 & 1) == 0) {
    if ((lVar6 == 0) ||
       (lVar6 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                          (lVar6,1,*(undefined8 *)PTR_DAT_04cada48), lVar6 == 0)) {
LAB_023d052c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar1) {
      lVar10 = 0;
      do {
        if (uVar1 <= (uint)lVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar9 = *(long **)(lVar6 + 0x20 + lVar10 * 8);
        if (plVar9 == (long *)0x0) goto LAB_023d052c;
        TMPro_TMP_Text__set_richText_42ccfa8(plVar9,0,0);
        (**(code **)(*plVar9 + 0x518))(plVar9,uVar5,*(undefined8 *)(*plVar9 + 0x520));
        uVar1 = *(uint *)(lVar6 + 0x18);
        lVar10 = lVar10 + 1;
      } while ((int)lVar10 < (int)uVar1);
    }
  }
  return;
}

