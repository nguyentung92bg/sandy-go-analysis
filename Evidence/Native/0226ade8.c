/* IL2CPP: Dino.BusSand.App.GameApp.<>c__DisplayClass84_0$$<Boot>b__0
void Dino_BusSand_App_GameApp___c__DisplayClass84_0___Boot_b__0 (Dino_BusSand_App_GameApp___c__DisplayClass84_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp.<>c__DisplayClass84_0$$<Boot>b__0
   void Dino_BusSand_App_GameApp___c__DisplayClass84_0___Boot_b__0
   (Dino_BusSand_App_GameApp___c__DisplayClass84_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_GameApp___c__DisplayClass84_0___Boot_b__0_216ade8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if ((bRam0000000004f9b89d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac898);
    FUN_02132f7c(PTR_DAT_04cac8a0);
    bRam0000000004f9b89d = 1;
  }
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x28), lVar1 != 0)) {
    uVar2 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                      (lVar1,*(undefined8 *)PTR_DAT_04cac8a0,5,0,*(undefined8 *)PTR_DAT_04cac898);
    puVar3 = (undefined8 *)(param_1 + 0x10);
    *puVar3 = uVar2;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << ((ulong)puVar3 >> 0xc & 0x3f),
                   ((ulong)puVar3 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

