/* IL2CPP: Dino.BusSand.App.UI.StreakHomeBar.<>c$$<Build>b__13_1
void Dino_BusSand_App_UI_StreakHomeBar___c___Build_b__13_1 (Dino_BusSand_App_UI_StreakHomeBar___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakHomeBar.<>c$$<Build>b__13_1
   void Dino_BusSand_App_UI_StreakHomeBar___c___Build_b__13_1
   (Dino_BusSand_App_UI_StreakHomeBar___c_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_StreakHomeBar___c___Build_b__13_1_21b5a20(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_14 [4];
  
  if ((bRam0000000004f9baa4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf3e8);
    FUN_02132f7c(PTR_DAT_04caf3f0);
    bRam0000000004f9baa4 = 1;
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
              (lVar2,*(undefined8 *)PTR_DAT_04caf3f0,2,uVar1,*(undefined8 *)PTR_DAT_04caf3e8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

