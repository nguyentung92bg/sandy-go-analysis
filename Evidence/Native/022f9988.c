/* IL2CPP: Dino.BusSand.App.UI.MechanicGuide$$AnyRiding
bool Dino_BusSand_App_UI_MechanicGuide__AnyRiding (Dino_BusSand_App_Gameplay_GameplayController_o* gc, int32_t* id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.MechanicGuide$$AnyRiding
   bool Dino_BusSand_App_UI_MechanicGuide__AnyRiding
   (Dino_BusSand_App_Gameplay_GameplayController_o* gc, int32_t* id, const MethodInfo* method); */

uint Dino_BusSand_App_UI_MechanicGuide__AnyRiding_21f9988(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_48;
  
  if ((bRam0000000004f9bc5e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1890);
    FUN_02132f7c(PTR_DAT_04cb1898);
    FUN_02132f7c(PTR_DAT_04cb18a0);
    FUN_02132f7c(PTR_DAT_04cb18a8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bc5e = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  lStack_60 = 0;
  uStack_48 = 0;
  *param_2 = 0xffffffff;
  if (((param_1 == 0) ||
      (lVar6 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1,0),
      puVar4 = PTR_DAT_04cb18a8, puVar3 = PTR_DAT_04cb1898, puVar2 = PTR_DAT_04cb1890,
      puVar1 = PTR_DAT_04ca9ae8, lVar6 == 0)) || (*(long *)(lVar6 + 0x20) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uStack_48 = Dino_BusSand_Core_Road__get_Buses_2411e9c(*(long *)(lVar6 + 0x20),0);
  Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
            (&uStack_88,&uStack_48,*(undefined8 *)puVar4);
  lStack_60 = lStack_78;
  uStack_68 = puStack_80;
  uStack_70 = uStack_88;
  uStack_88 = 0;
  puStack_80 = &uStack_70;
  do {
    do {
      uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_70,*(undefined8 *)puVar3);
      lVar6 = lStack_60;
      if ((uVar5 & 1) == 0) goto LAB_022f9b04;
      if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    } while (((*(int *)(lStack_60 + 0x28) != 1) ||
             (uVar7 = Dino_BusSand_Core_RoadBus__get_IsComplete_2411838(lStack_60,0),
             (uVar7 & 1) != 0)) || (0 < *(int *)(lVar6 + 0x5c)));
    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar8 = Dino_BusSand_View_GameView__VehicleOf_23ab408
                      (*(long *)(param_1 + 0x38),*(undefined4 *)(lVar6 + 0x10),0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  } while ((uVar7 & 1) == 0);
  *param_2 = *(undefined4 *)(lVar6 + 0x10);
LAB_022f9b04:
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_70,*(undefined8 *)puVar2);
  return uVar5 & 1;
}

