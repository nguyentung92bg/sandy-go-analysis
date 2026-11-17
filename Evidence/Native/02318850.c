/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$IapSuccess
void Dino_BusSand_App_Meta_GameTracking__IapSuccess (int32_t storeItemId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$IapSuccess
   void Dino_BusSand_App_Meta_GameTracking__IapSuccess (int32_t storeItemId, const MethodInfo*
   method); */

void Dino_BusSand_App_Meta_GameTracking__IapSuccess_2218850(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = PTR_DAT_04cac498;
  if ((bRam0000000004f9bd6b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caba90);
    FUN_02132f7c(PTR_DAT_04cb2240);
    FUN_02132f7c(PTR_DAT_04cad1f8);
    FUN_02132f7c(PTR_DAT_04cb26b8);
    FUN_02132f7c(PTR_DAT_04caa840);
    bRam0000000004f9bd6b = 1;
  }
  puVar1 = PTR_DAT_04caba90;
  uStack_30 = 0;
  uStack_28 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = Dino_BusSand_App_Meta_GameTracking__PackName_22174bc(param_1);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  Dino_BusSand_App_Meta_JourneyTracking__UiMark_22149d0(5,0,0,uVar3);
  Dino_BusSand_App_Meta_GameTracking__Price_22185a0(param_1,&uStack_28,&uStack_30);
  lVar4 = Dino_BusSand_App_Meta_GameTracking__IapParams_2218464(param_1);
  uStack_38 = uStack_28;
  uVar3 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x80),&uStack_38);
  if ((lVar4 != 0) &&
     (lVar4 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                        (lVar4,*(undefined8 *)PTR_DAT_04cad1f8,uVar3,0), puVar1 = PTR_DAT_04cb26b8,
     puVar2 = PTR_DAT_04cb2240, lVar4 != 0)) {
    uVar3 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                      (lVar4,*(undefined8 *)PTR_DAT_04caa840,uStack_30,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    Dino_BusSand_App_Meta_TrackingPlan__Record_22750bc(*(undefined8 *)puVar1,uVar3,0);
    Dino_BusSand_App_Meta_GameTracking__PushProperties_2211e88(0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

