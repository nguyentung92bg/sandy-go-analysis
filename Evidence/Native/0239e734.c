/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$LotVehicles
System_Collections_Generic_List_Transform__o* Dino_BusSand_App_Gameplay_GameplayController__LotVehicles (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$LotVehicles
   System_Collections_Generic_List_Transform__o*
   Dino_BusSand_App_Gameplay_GameplayController__LotVehicles
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_Gameplay_GameplayController__LotVehicles_229e734(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_38;
  
  puVar4 = PTR_DAT_04cad728;
  puVar3 = PTR_DAT_04cad6f0;
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c243 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab9e0);
    FUN_02132f7c(PTR_DAT_04cab9e8);
    FUN_02132f7c(PTR_DAT_04cab9f0);
    FUN_02132f7c(PTR_DAT_04cab9f8);
    FUN_02132f7c(PTR_DAT_04cad6c0);
    FUN_02132f7c(PTR_DAT_04cad6f0);
    FUN_02132f7c(PTR_DAT_04cad728);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c243 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_38 = 0;
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar5,*(undefined8 *)puVar3);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
  if (((uVar6 & 1) == 0) &&
     (lVar7 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1), lVar7 != 0)
     ) {
    lVar7 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x28) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uStack_38 = Dino_BusSand_Core_TruckGrid__get_Trucks_241c3d0(*(long *)(lVar7 + 0x28),0);
    Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
              (&uStack_78,&uStack_38,*(undefined8 *)PTR_DAT_04cab9f8);
    puVar4 = PTR_DAT_04cad6c0;
    puVar3 = PTR_DAT_04cab9e8;
    uStack_58 = puStack_70;
    uStack_60 = uStack_78;
    lStack_50 = lStack_68;
    uStack_78 = 0;
    puStack_70 = &uStack_60;
LAB_0239e88c:
    uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (&uStack_60,*(undefined8 *)puVar3);
    if ((uVar6 & 1) != 0) {
      if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar7 = Dino_BusSand_View_GameView__VehicleOf_23ab408
                        (*(long *)(param_1 + 0x38),*(undefined4 *)(lStack_50 + 0x10),0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
      if ((uVar6 & 1) != 0) {
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar9 = UnityEngine_Component__get_transform_43bcd18(lVar7,0);
        if (lVar5 != 0) {
          lVar7 = *(long *)(lVar5 + 0x10);
          lVar8 = *(long *)puVar4;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar7 != 0) {
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
              thunk_FUN_02134474();
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar5,uVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_0239e88c;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      goto LAB_0239e88c;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_60,*(undefined8 *)PTR_DAT_04cab9e0);
  }
  return lVar5;
}

