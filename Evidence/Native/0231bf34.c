/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$NextTapIsAuto
void Dino_BusSand_App_Meta_JourneyTracking__NextTapIsAuto (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$NextTapIsAuto
   void Dino_BusSand_App_Meta_JourneyTracking__NextTapIsAuto (const MethodInfo* method); */

void Dino_BusSand_App_Meta_JourneyTracking__NextTapIsAuto_221bf34(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04caba90;
  if ((bRam0000000004f9bd93 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba90);
    bRam0000000004f9bd93 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(lVar2 + 0xb8);
  *(undefined1 *)(lVar2 + 0x38) = 1;
  *(undefined4 *)(lVar2 + 0x20) = 0;
  return;
}

