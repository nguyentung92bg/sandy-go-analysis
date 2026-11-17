/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$SendUi
void Dino_BusSand_App_Meta_JourneyTracking__SendUi (System_String_o* uj, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$SendUi
   void Dino_BusSand_App_Meta_JourneyTracking__SendUi (System_String_o* uj, const MethodInfo*
   method); */

void Dino_BusSand_App_Meta_JourneyTracking__SendUi_221b8ec(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uStack_24;
  
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bdac & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb2240);
    FUN_02132f7c(PTR_DAT_04cb2880);
    FUN_02132f7c(PTR_DAT_04cb2888);
    FUN_02132f7c(PTR_DAT_04cb2890);
    bRam0000000004f9bdac = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_04cb2240;
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar3 + 0xe4);
    *(int *)(lVar5 + 0x94) = *(int *)(lVar5 + 0x94) + 1;
    if (iVar1 == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar3 = Dino_BusSand_App_Meta_TrackingPlan__P_2275068(0);
    uStack_24 = *(undefined4 *)(lVar5 + 0x94);
    uVar4 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_24);
    if ((lVar3 == 0) ||
       (lVar3 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                          (lVar3,*(undefined8 *)PTR_DAT_04cb2880,uVar4,0), puVar2 = PTR_DAT_04cb2888
       , lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar4 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                      (lVar3,*(undefined8 *)PTR_DAT_04cb2890,param_1,0);
    Dino_BusSand_App_Meta_TrackingPlan__Record_22750bc(*(undefined8 *)puVar2,uVar4,0);
  }
  return;
}

