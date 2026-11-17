/* IL2CPP: Dino.BusSand.App.UI.HomeBeach$$.cctor
void Dino_BusSand_App_UI_HomeBeach___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeBeach$$.cctor
   void Dino_BusSand_App_UI_HomeBeach___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeBeach___cctor_22dfa94(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar3 = PTR_DAT_04cb7138;
  puVar2 = PTR_DAT_04caed88;
  if ((bRam0000000004f9c402 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7138);
    FUN_02132f7c(PTR_DAT_04caed88);
    FUN_02132f7c(PTR_DAT_04cb6990);
    bRam0000000004f9c402 = 1;
  }
  uVar4 = *(undefined8 *)puVar2;
  **(undefined1 **)(*(long *)puVar3 + 0xb8) = 1;
  lVar5 = FUN_02133068(uVar4,3);
  if (lVar5 != 0) {
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 != 0) {
      *(undefined8 *)(lVar5 + 0x20) = _UNK_00e6a638;
      if (uVar1 != 1) {
        *(undefined8 *)(lVar5 + 0x28) = _UNK_00e6a640;
        if (2 < uVar1) {
          *(undefined8 *)(lVar5 + 0x30) = _UNK_00e6a588;
          *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = lVar5;
          thunk_FUN_02134474();
          lVar5 = FUN_02133068(*(undefined8 *)puVar2,3);
          if (lVar5 == 0) goto LAB_023dfc2c;
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 != 0) {
            *(undefined8 *)(lVar5 + 0x20) = _UNK_00e6a718;
            if (uVar1 != 1) {
              *(undefined8 *)(lVar5 + 0x28) = _UNK_00e69ec0;
              if (2 < uVar1) {
                *(undefined8 *)(lVar5 + 0x30) = _UNK_00e6a648;
                puVar2 = PTR_DAT_04cb6990;
                *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10) = lVar5;
                thunk_FUN_02134474();
                lVar5 = FUN_02133068(*(undefined8 *)puVar2,2);
                uVar4 = _UNK_00e6b770;
                if (lVar5 == 0) goto LAB_023dfc2c;
                if (*(int *)(lVar5 + 0x18) != 0) {
                  *(undefined8 *)(lVar5 + 0x28) = _UNK_00e6b778;
                  *(undefined8 *)(lVar5 + 0x20) = uVar4;
                  uVar4 = _UNK_00e6b540;
                  if (*(int *)(lVar5 + 0x18) != 1) {
                    *(undefined8 *)(lVar5 + 0x38) = _UNK_00e6b548;
                    *(undefined8 *)(lVar5 + 0x30) = uVar4;
                    *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18) = lVar5;
                    thunk_FUN_02134474();
                    uVar4 = _UNK_00e6acd0;
                    lVar5 = *(long *)(*(long *)puVar3 + 0xb8);
                    *(undefined8 *)(lVar5 + 0x28) = _UNK_00e6acd8;
                    *(undefined8 *)(lVar5 + 0x20) = uVar4;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
LAB_023dfc2c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

