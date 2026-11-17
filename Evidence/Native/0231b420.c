/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$get_Ui
Dino_BusSand_App_Meta_Journey_UiJourney_o* Dino_BusSand_App_Meta_JourneyTracking__get_Ui (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$get_Ui
   Dino_BusSand_App_Meta_Journey_UiJourney_o* Dino_BusSand_App_Meta_JourneyTracking__get_Ui (const
   MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_JourneyTracking__get_Ui_221b420(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04caba90;
  if ((bRam0000000004f9bd87 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba90);
    bRam0000000004f9bd87 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  return *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
}

