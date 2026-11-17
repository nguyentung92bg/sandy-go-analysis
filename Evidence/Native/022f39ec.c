/* IL2CPP: Dino.BusSand.App.UI.YachtRacingStartPanel$$.cctor
void Dino_BusSand_App_UI_YachtRacingStartPanel___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingStartPanel$$.cctor
   void Dino_BusSand_App_UI_YachtRacingStartPanel___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingStartPanel___cctor_21f39ec(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  
  puVar1 = PTR_DAT_04caa038;
  if ((bRam0000000004f9bc31 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cb1550);
    FUN_02132f7c(PTR_DAT_04cb15a8);
    FUN_02132f7c(PTR_DAT_04cb15b0);
    FUN_02132f7c(PTR_DAT_04cb15b8);
    bRam0000000004f9bc31 = 1;
  }
  lVar2 = FUN_02133068(*(undefined8 *)puVar1,3);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)PTR_DAT_04cb15b8;
      thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20));
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)PTR_DAT_04cb15b0;
        thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28));
        puVar1 = PTR_DAT_04cb1550;
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)PTR_DAT_04cb15a8;
          thunk_FUN_02134474();
          **(long **)(*(long *)puVar1 + 0xb8) = lVar2;
          uVar3 = *(ulong *)(*(long *)puVar1 + 0xb8);
          if (iRam00000000051c1b10 != 0) {
            FUN_02220bf0(1L << (uVar3 >> 0xc & 0x3f),(uVar3 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
          }
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

