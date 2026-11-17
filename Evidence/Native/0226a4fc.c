/* IL2CPP: Dino.BusSand.App.GameApp.<>c$$<Start>b__76_0
void Dino_BusSand_App_GameApp___c___Start_b__76_0 (Dino_BusSand_App_GameApp___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp.<>c$$<Start>b__76_0
   void Dino_BusSand_App_GameApp___c___Start_b__76_0 (Dino_BusSand_App_GameApp___c_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_GameApp___c___Start_b__76_0_216a4fc(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04caba50;
  if ((bRam0000000004f9b897 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    bRam0000000004f9b897 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0226a560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    return;
  }
  return;
}

