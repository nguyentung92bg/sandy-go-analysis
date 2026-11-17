/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$GuideWorldAnchor
UnityEngine_Vector3_o Dino_BusSand_App_Gameplay_GameplayController__GuideWorldAnchor (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$GuideWorldAnchor
   UnityEngine_Vector3_o Dino_BusSand_App_Gameplay_GameplayController__GuideWorldAnchor
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Gameplay_GameplayController__GuideWorldAnchor_229dfb0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  undefined8 uStack_48;
  
  if ((bRam0000000004f9c240 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab9e0);
    FUN_02132f7c(PTR_DAT_04cab9e8);
    FUN_02132f7c(PTR_DAT_04cab9f0);
    FUN_02132f7c(PTR_DAT_04cab9f8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c240 = 1;
  }
  uStack_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  lStack_60 = 0;
  uStack_48 = 0;
  lVar3 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
  if (lVar3 == 0) goto LAB_0239e1a8;
  iVar2 = Dino_BusSand_Core_SimBot__BestTap_241b8b8(lVar3,0);
  if (iVar2 < 0) {
    if (*(long *)(lVar3 + 0x28) == 0) goto LAB_0239e20c;
    uStack_48 = Dino_BusSand_Core_TruckGrid__get_Trucks_241c3d0(*(long *)(lVar3 + 0x28),0);
    Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
              (&uStack_88,&uStack_48,*(undefined8 *)PTR_DAT_04cab9f8);
    puVar1 = PTR_DAT_04cab9e8;
    puStack_68 = puStack_80;
    uStack_70 = uStack_88;
    lStack_60 = lStack_78;
    uStack_88 = 0;
    puStack_80 = &uStack_70;
    do {
      uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_70,*(undefined8 *)puVar1);
      lVar5 = lStack_60;
      if ((uVar4 & 1) == 0) goto LAB_0239e0c8;
      if (*(long *)(lVar3 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar4 = Dino_BusSand_Core_TruckGrid__CanEscape_2423be4(*(long *)(lVar3 + 0x28),lStack_60,0);
    } while ((uVar4 & 1) == 0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    iVar2 = *(int *)(lVar5 + 0x10);
LAB_0239e0c8:
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_70,*(undefined8 *)PTR_DAT_04cab9e0);
    if (-1 < iVar2) goto LAB_0239e0e0;
    lVar3 = 0;
  }
  else {
LAB_0239e0e0:
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_0239e20c;
    lVar3 = Dino_BusSand_View_GameView__VehicleOf_23ab408(*(long *)(param_1 + 0x38),iVar2,0);
  }
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
  if ((uVar4 & 1) == 0) {
LAB_0239e1a8:
    if (cRam0000000004f9b65d == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65d = '\x01';
    }
    uVar6 = *(undefined8 *)PTR_DAT_04caa208;
    return;
  }
  if ((lVar3 != 0) && (lVar5 = UnityEngine_Component__get_transform_43bcd18(lVar3,0), lVar5 != 0)) {
    UnityEngine_Transform__get_position_43d0e48(lVar5,0);
    if (cRam0000000004f9bcf8 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9bcf8 = '\x01';
    }
    Dino_BusSand_View_VehicleView__get_ModelHeightWorld_23fefb0(lVar3,0);
    return;
  }
LAB_0239e20c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

