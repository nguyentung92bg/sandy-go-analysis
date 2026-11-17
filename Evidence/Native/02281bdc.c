/* IL2CPP: Dino.BusSand.App.UI.KitPrefabs$$Respawn
bool Dino_BusSand_App_UI_KitPrefabs__Respawn (Dino_BusSand_App_UI_UIPanel_o* panel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitPrefabs$$Respawn
   bool Dino_BusSand_App_UI_KitPrefabs__Respawn (Dino_BusSand_App_UI_UIPanel_o* panel, const
   MethodInfo* method); */

uint Dino_BusSand_App_UI_KitPrefabs__Respawn_2181bdc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b92f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac4f8);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad608);
    bRam0000000004f9b92f = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  puVar2 = PTR_DAT_04cac4f8;
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  if (param_1 != 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_04cac4f8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar5 = Dino_BusSand_App_UI_KitPrefabs__Get_2181940(uVar8);
    if (lVar5 == 0) {
      return 0;
    }
    uVar8 = *(undefined8 *)(lVar5 + 0x18);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar6 = Dino_BusSand_App_UI_KitPrefabs__get_Hold_2181d88();
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    lVar5 = UnityEngine_Object__Instantiate_object__2805310
                      (uVar8,uVar6,0,*(undefined8 *)PTR_DAT_04cad390);
    if ((lVar5 != 0) && (lVar7 = UnityEngine_GameObject__get_transform_43c1048(lVar5,0), lVar7 != 0)
       ) {
      lVar7 = UnityEngine_Transform__Find_43d4bec(lVar7,*(undefined8 *)PTR_DAT_04cad608,0);
      uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
      if ((uVar4 & 1) != 0) {
        uVar8 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
        if (lVar7 == 0) goto LAB_02281d84;
        UnityEngine_Transform__SetParent_43d1e34(lVar7,uVar8,0,0);
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      UnityEngine_Object__DestroyImmediate_43c8260(lVar5,0);
      puVar1 = PTR_DAT_04ca9ae8;
      if ((bRam0000000004fa8638 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8,0,0);
        bRam0000000004fa8638 = 1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = UnityEngine_Object__CompareBaseObjects_43c6f94(lVar7,0);
      return (uVar3 ^ 0xffffffff) & 1;
    }
  }
LAB_02281d84:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

