/* IL2CPP: Dino.BusSand.App.GameApp.<>c__DisplayClass84_1$$<Boot>b__13
void Dino_BusSand_App_GameApp___c__DisplayClass84_1___Boot_b__13 (Dino_BusSand_App_GameApp___c__DisplayClass84_1_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp.<>c__DisplayClass84_1$$<Boot>b__13
   void Dino_BusSand_App_GameApp___c__DisplayClass84_1___Boot_b__13
   (Dino_BusSand_App_GameApp___c__DisplayClass84_1_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_GameApp___c__DisplayClass84_1___Boot_b__13_216b260(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  puVar1 = PTR_DAT_04caa038;
  if ((bRam0000000004f9b8a2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac4f8);
    FUN_02132f7c(PTR_DAT_04caa038);
    bRam0000000004f9b8a2 = 1;
  }
  lVar2 = FUN_02133068(*(undefined8 *)puVar1,1);
  puVar1 = PTR_DAT_04cac4f8;
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_1 + 0x10);
    thunk_FUN_02134474();
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar1 = PTR_DAT_04cac4f8;
    if ((bRam0000000004f9b930 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cac4f8);
      bRam0000000004f9b930 = 1;
    }
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    if ((**(char **)(lVar3 + 0xb8) != '\0' && lVar2 != 0) && (0 < (int)*(ulong *)(lVar2 + 0x18))) {
      uVar6 = 0;
      uVar4 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      do {
        if (uVar4 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        uVar5 = *(undefined8 *)(lVar2 + 0x20 + uVar6 * 8);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_UI_KitPrefabs__Get_2181940(uVar5);
        uVar4 = (ulong)*(uint *)(lVar2 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar2 + 0x18));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

