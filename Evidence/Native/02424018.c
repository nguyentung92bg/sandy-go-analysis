/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome.<>c$$<RegisterEntries>b__38_3
void Dino_BusSand_App_UI_LiveOpsHome___c___RegisterEntries_b__38_3 (Dino_BusSand_App_UI_LiveOpsHome___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome.<>c$$<RegisterEntries>b__38_3
   void Dino_BusSand_App_UI_LiveOpsHome___c___RegisterEntries_b__38_3
   (Dino_BusSand_App_UI_LiveOpsHome___c_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_LiveOpsHome___c___RegisterEntries_b__38_3_2324018(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_14 [4];
  
  if ((bRam0000000004f9c5c9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb8bf8);
    FUN_02132f7c(PTR_DAT_04cb8a58);
    bRam0000000004f9c5c9 = 1;
  }
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  auStack_14[0] = 0;
  lVar2 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  uVar1 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x28),auStack_14);
  if (lVar2 != 0) {
    Dino_BusSand_App_UI_UIManager__Open_object__2945314
              (lVar2,*(undefined8 *)PTR_DAT_04cb8a58,2,uVar1,*(undefined8 *)PTR_DAT_04cb8bf8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

