/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$BindQuitItem
void Dino_BusSand_App_Meta_ClimbTowerFeature__BindQuitItem (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, UnityEngine_GameObject_o* row, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$BindQuitItem
   void Dino_BusSand_App_Meta_ClimbTowerFeature__BindQuitItem
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, UnityEngine_GameObject_o* row, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_ClimbTowerFeature__BindQuitItem_222d420(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9be46 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cadb50);
    FUN_02132f7c(PTR_DAT_04cb1300);
    FUN_02132f7c(PTR_DAT_04cb12d0);
    bRam0000000004f9be46 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(param_2,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar5 = UnityEngine_GameObject__get_transform_43c1048(param_2,0);
  uVar5 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc(uVar5,*(undefined8 *)PTR_DAT_04cadb50,0);
  Dino_BusSand_App_Meta_ClimbTowerFeature__BindProcess_222d0f0(param_1,uVar5);
  uVar5 = UnityEngine_GameObject__get_transform_43c1048(param_2,0);
  lVar6 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc(uVar5,*(undefined8 *)PTR_DAT_04cb1300,0);
  lVar8 = *(long *)PTR_DAT_04ca9d18;
  lVar7 = *(long *)(lVar8 + 0x38);
  if (lVar7 == 0) {
    FUN_0216b4cc(lVar8);
    lVar7 = *(long *)(lVar8 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0216b470();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar7 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0216b470();
  }
  uVar5 = Dino_BusSand_App_Meta_StreakTowerUtil__L_2251bd4
                    (*(undefined8 *)PTR_DAT_04cb12d0,**(undefined8 **)(lVar7 + 0xb8),0);
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9be49 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cada48);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9be49 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
  if ((uVar4 & 1) == 0) {
    if ((lVar6 == 0) ||
       (lVar6 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                          (lVar6,1,*(undefined8 *)PTR_DAT_04cada48), lVar6 == 0)) {
LAB_0232d418:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar1) {
      lVar7 = 0;
      do {
        if (uVar1 <= (uint)lVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar3 = *(long **)(lVar6 + 0x20 + lVar7 * 8);
        if (plVar3 == (long *)0x0) goto LAB_0232d418;
        (**(code **)(*plVar3 + 0x518))(plVar3,uVar5,*(undefined8 *)(*plVar3 + 0x520));
        uVar1 = *(uint *)(lVar6 + 0x18);
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < (int)uVar1);
    }
  }
  return;
}

