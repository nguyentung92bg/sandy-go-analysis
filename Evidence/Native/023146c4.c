/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$OnBoot
void Dino_BusSand_App_Meta_JourneyTracking__OnBoot (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$OnBoot
   void Dino_BusSand_App_Meta_JourneyTracking__OnBoot (const MethodInfo* method); */

void Dino_BusSand_App_Meta_JourneyTracking__OnBoot_22146c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_04caba90;
  if ((bRam0000000004f9bd8c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba90);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9bd8c = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_JourneyTracking__Hook_221b4d0();
  puVar2 = PTR_DAT_04cabaf8;
  if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
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
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar3 != 0) {
    puVar5 = (undefined8 *)(lVar3 + 0x98);
    uVar4 = System_String__IsNullOrEmpty_46d2084(*puVar5,0);
    if ((uVar4 & 1) == 0) {
      uVar6 = *puVar5;
      *puVar5 = *(undefined8 *)PTR_DAT_04ca9c30;
      thunk_FUN_02134474(puVar5);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_JourneyTracking__SendUi_221b8ec(uVar6);
    }
  }
  return;
}

