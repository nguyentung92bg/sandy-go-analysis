/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$TutorialDone
void Dino_BusSand_App_Meta_GameTracking__TutorialDone (int32_t guideId, int32_t itemId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$TutorialDone
   void Dino_BusSand_App_Meta_GameTracking__TutorialDone (int32_t guideId, int32_t itemId, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_GameTracking__TutorialDone_2218e1c(int param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 auStack_34 [3];
  
  if ((bRam0000000004f9bd6e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cb26f8);
    FUN_02132f7c(PTR_DAT_04cae0f0);
    FUN_02132f7c(PTR_DAT_04cb2700);
    FUN_02132f7c(PTR_DAT_04cb2708);
    FUN_02132f7c(PTR_DAT_04cb25a8);
    FUN_02132f7c(PTR_DAT_04cb2710);
    bRam0000000004f9bd6e = 1;
  }
  puVar1 = PTR_DAT_04cb26f8;
  puVar7 = (undefined8 *)PTR_DAT_04cb25a8;
  if (param_2 == 0) {
    if (param_1 == 2) {
      if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar7 = (undefined8 *)PTR_DAT_04cae0f0;
      Dino_BusSand_App_Meta_GameTracking__Tutorial_2218ce8
                (*(undefined8 *)PTR_DAT_04cae0f0,*(undefined8 *)PTR_DAT_04cb2710,2);
      uVar5 = 3;
      puVar6 = (undefined8 *)PTR_DAT_04cb2708;
    }
    else {
      if (param_1 != 1) {
        return;
      }
      if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = 1;
      puVar6 = (undefined8 *)PTR_DAT_04cb2700;
      puVar7 = (undefined8 *)PTR_DAT_04cae0f0;
    }
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = Dino_BusSand_App_Meta_GameTracking__ResourceName_2216080(param_2);
    uVar3 = System_String__Concat_46c82e0(*(undefined8 *)puVar1,uVar3,0);
    Dino_BusSand_App_Meta_GameTracking__Tutorial_2218ce8(*puVar7,uVar3,1);
    uVar5 = 2;
    puVar6 = (undefined8 *)PTR_DAT_04cb2708;
  }
  puVar1 = PTR_DAT_04cb2240;
  uVar3 = *puVar7;
  uVar4 = *puVar6;
  if ((bRam0000000004f9bd6f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2240);
    FUN_02132f7c(PTR_DAT_04cb26d8);
    FUN_02132f7c(PTR_DAT_04cb26e0);
    FUN_02132f7c(PTR_DAT_04cb26e8);
    FUN_02132f7c(PTR_DAT_04cb26f0);
    bRam0000000004f9bd6f = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar2 = Dino_BusSand_App_Meta_TrackingPlan__P_2275068(0);
  if ((lVar2 != 0) &&
     (lVar2 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                        (lVar2,*(undefined8 *)PTR_DAT_04cb26d8,uVar3,0), lVar2 != 0)) {
    lVar2 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                      (lVar2,*(undefined8 *)PTR_DAT_04cb26e0,uVar4,0);
    auStack_34[0] = uVar5;
    uVar3 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),auStack_34);
    puVar1 = PTR_DAT_04cb26e8;
    if (lVar2 != 0) {
      uVar3 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                        (lVar2,*(undefined8 *)PTR_DAT_04cb26f0,uVar3,0);
      Dino_BusSand_App_Meta_TrackingPlan__Record_22750bc(*(undefined8 *)puVar1,uVar3,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

