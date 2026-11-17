/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$EnsureUi
void Dino_BusSand_App_Meta_JourneyTracking__EnsureUi (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$EnsureUi
   void Dino_BusSand_App_Meta_JourneyTracking__EnsureUi (const MethodInfo* method); */

void Dino_BusSand_App_Meta_JourneyTracking__EnsureUi_221d8dc(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  undefined1 auStack_50 [16];
  
  puVar2 = PTR_DAT_04caba90;
  if ((bRam0000000004f9bda6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacfd0);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caba90);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bda6 = 1;
  }
  lVar3 = *(long *)puVar2;
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar6 != 0) {
    if (*(char *)(lVar6 + 0x38) != '\0') {
      return;
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    }
    if (*(int *)(*(long *)PTR_DAT_04cacfd0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    auStack_50 = System_DateTimeOffset__get_UtcNow_48145cc(0);
    uVar4 = System_DateTimeOffset__ToUnixTimeSeconds_48160f8(auStack_50,0);
    dVar7 = (double)UnityEngine_Time__get_realtimeSinceStartupAsDouble_43cd760(0);
    puVar2 = PTR_DAT_04cabaf8;
    lVar3 = -0x8000000000000000;
    if (dVar7 * _UNK_00e6a6f0 != INFINITY) {
      lVar3 = (long)(dVar7 * _UNK_00e6a6f0);
    }
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar2;
    }
    puVar2 = PTR_DAT_04cac498;
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
    if (lVar5 != 0) {
      uVar1 = *(undefined4 *)(lVar5 + 0x90);
      if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9bdfd == '\0') {
        FUN_02132f7c(PTR_DAT_04cac498);
        cRam0000000004f9bdfd = '\x01';
      }
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar2;
      }
      if (lVar6 != 0) {
        Dino_BusSand_App_Meta_Journey_UiJourney__Begin_229a498
                  (lVar6,uVar4,lVar3,uVar1,**(undefined1 **)(lVar5 + 0xb8),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

