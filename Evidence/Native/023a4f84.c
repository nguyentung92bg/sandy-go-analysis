/* IL2CPP: Dino.BusSand.App.UI.CommentPopPanel$$ShouldShow
bool Dino_BusSand_App_UI_CommentPopPanel__ShouldShow (int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommentPopPanel$$ShouldShow
   bool Dino_BusSand_App_UI_CommentPopPanel__ShouldShow (int32_t level, const MethodInfo* method);
    */

undefined8 Dino_BusSand_App_UI_CommentPopPanel__ShouldShow_22a4f84(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04cac458;
  if ((bRam0000000004f9c281 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cac458);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb5c10);
    bRam0000000004f9c281 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_04cabaf8;
  if (*(char *)(*(long *)(lVar3 + 0xb8) + 3) != '\0') {
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
    if (lVar5 != 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = Dino_BusSand_App_Meta_Profile__Flag_22736a4(*(undefined8 *)PTR_DAT_04cb5c10,0);
      puVar2 = PTR_DAT_04cac7b8;
      if ((((uVar4 & 1) == 0) && (*(int *)(lVar5 + 0xec) < 3)) &&
         ((param_1 == 0xb ||
          (((0x67 < param_1 &&
            (((uint)((param_1 + -0x68) * -0x3d70a3d7) >> 2 | param_1 * 0x40000000) < 0x28f5c29)) ||
           (*(char *)(lVar5 + 0xf0) != '\0')))))) {
        lVar3 = *(long *)PTR_DAT_04cac7b8;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar3 = *(long *)puVar2;
        }
        lVar3 = **(long **)(lVar3 + 0xb8);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar4 = (**(code **)(lVar3 + 0x18))
                          (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
        if ((uVar4 & 1) != 0) {
          return 1;
        }
        if (*(char *)(lVar5 + 0xf0) == '\0') {
          lVar3 = *(long *)puVar1;
          *(undefined1 *)(lVar5 + 0xf0) = 1;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
        }
      }
    }
  }
  return 0;
}

