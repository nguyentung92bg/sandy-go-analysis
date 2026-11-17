/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$PushSegments
void Dino_BusSand_App_Meta_GameTracking__PushSegments (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$PushSegments
   void Dino_BusSand_App_Meta_GameTracking__PushSegments (const MethodInfo* method); */

void Dino_BusSand_App_Meta_GameTracking__PushSegments_220f88c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uStack_34;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bd7f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b50);
    FUN_02132f7c(PTR_DAT_04ca9b58);
    FUN_02132f7c(PTR_DAT_04ca9b08);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cacfe0);
    FUN_02132f7c(PTR_DAT_04cb2240);
    FUN_02132f7c(PTR_DAT_04cb2248);
    FUN_02132f7c(PTR_DAT_04cb2250);
    FUN_02132f7c(PTR_DAT_04cb2258);
    bRam0000000004f9bd7f = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar1;
  }
  puVar2 = PTR_DAT_04cacfe0;
  puVar1 = PTR_DAT_04ca9b50;
  if (*(long *)(*(long *)(lVar5 + 0xb8) + 0x10) != 0) {
    lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9b08);
    System_Collections_Generic_Dictionary_object__object____ctor_34b3628
              (lVar5,*(undefined8 *)puVar1);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = Dino_BusSand_App_Meta_Segments__get_LifeName_220fa78();
    puVar4 = PTR_DAT_04cb2250;
    puVar3 = PTR_DAT_04cb2248;
    puVar2 = PTR_DAT_04cb2240;
    puVar1 = PTR_DAT_04ca9b58;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
              (lVar5,*(undefined8 *)PTR_DAT_04cb2258,uVar6,*(undefined8 *)PTR_DAT_04ca9b58);
    uVar6 = Dino_BusSand_App_Meta_Segments__get_MoneyName_220fb94();
    System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
              (lVar5,*(undefined8 *)puVar3,uVar6,*(undefined8 *)puVar1);
    uStack_34 = Dino_BusSand_App_Meta_Segments__get_Stuck_220f608();
    uStack_34 = uStack_34 & 1;
    uVar7 = *(undefined8 *)puVar4;
    uVar6 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_34);
    System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
              (lVar5,uVar7,uVar6,*(undefined8 *)puVar1);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_TrackingPlan__SetProperties_2275fa8(lVar5,0);
  }
  return;
}

