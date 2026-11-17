/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$TutorialOpen
void Dino_BusSand_App_Meta_GameTracking__TutorialOpen (int32_t guideId, int32_t itemId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$TutorialOpen
   void Dino_BusSand_App_Meta_GameTracking__TutorialOpen (int32_t guideId, int32_t itemId, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_GameTracking__TutorialOpen_2218c24(int param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 auStack_34 [3];
  
  if ((bRam0000000004f9bd6d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cacd10);
    FUN_02132f7c(PTR_DAT_04cae0f0);
    FUN_02132f7c(PTR_DAT_04cb25a8);
    bRam0000000004f9bd6d = 1;
  }
  if (param_1 == 1) {
    iVar1 = *(int *)(*(long *)PTR_DAT_04cac498 + 0xe4);
    puVar2 = (undefined8 *)PTR_DAT_04cae0f0;
  }
  else {
    if (param_2 == 0) {
      return;
    }
    iVar1 = *(int *)(*(long *)PTR_DAT_04cac498 + 0xe4);
    puVar2 = (undefined8 *)PTR_DAT_04cb25a8;
  }
  if (iVar1 == 0) {
    thunk_FUN_0218fdac();
  }
  puVar3 = PTR_DAT_04cb2240;
  uVar4 = *puVar2;
  uVar6 = *(undefined8 *)PTR_DAT_04cacd10;
  if ((bRam0000000004f9bd6f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2240);
    FUN_02132f7c(PTR_DAT_04cb26d8);
    FUN_02132f7c(PTR_DAT_04cb26e0);
    FUN_02132f7c(PTR_DAT_04cb26e8);
    FUN_02132f7c(PTR_DAT_04cb26f0);
    bRam0000000004f9bd6f = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar5 = Dino_BusSand_App_Meta_TrackingPlan__P_2275068(0);
  if ((lVar5 != 0) &&
     (lVar5 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                        (lVar5,*(undefined8 *)PTR_DAT_04cb26d8,uVar4,0), lVar5 != 0)) {
    lVar5 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                      (lVar5,*(undefined8 *)PTR_DAT_04cb26e0,uVar6,0);
    auStack_34[0] = 0;
    uVar4 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),auStack_34);
    puVar3 = PTR_DAT_04cb26e8;
    if (lVar5 != 0) {
      uVar4 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                        (lVar5,*(undefined8 *)PTR_DAT_04cb26f0,uVar4,0);
      Dino_BusSand_App_Meta_TrackingPlan__Record_22750bc(*(undefined8 *)puVar3,uVar4,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

