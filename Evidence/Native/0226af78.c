/* IL2CPP: Dino.BusSand.App.GameApp.<>c__DisplayClass84_0$$<Boot>b__4
void Dino_BusSand_App_GameApp___c__DisplayClass84_0___Boot_b__4 (Dino_BusSand_App_GameApp___c__DisplayClass84_0_o* __this, int32_t r, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp.<>c__DisplayClass84_0$$<Boot>b__4
   void Dino_BusSand_App_GameApp___c__DisplayClass84_0___Boot_b__4
   (Dino_BusSand_App_GameApp___c__DisplayClass84_0_o* __this, int32_t r, const MethodInfo* method);
    */

void Dino_BusSand_App_GameApp___c__DisplayClass84_0___Boot_b__4_216af78(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  int iStack_48;
  
  puVar3 = PTR_DAT_04cac8a8;
  puVar2 = PTR_DAT_04cac570;
  puVar1 = PTR_DAT_04cab240;
  if ((bRam0000000004f9b89f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab240);
    FUN_02132f7c(PTR_DAT_04cac570);
    FUN_02132f7c(PTR_DAT_04cac8a8);
    bRam0000000004f9b89f = 1;
  }
  uStack_58 = *(undefined8 *)puVar2;
  uStack_50 = 0xffffffffffffffff;
  iStack_48 = param_2;
  uVar4 = System_Enum__ToString_4863070(&uStack_58,0);
  uVar4 = System_String__Concat_46c82e0(*(undefined8 *)puVar3,uVar4,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  Dino_BusSand_App_BootTrace__Mark_214e018(uVar4,0);
  if (*(char *)(param_1 + 0x28) == '\0') {
    *(int *)(param_1 + 0x2c) = param_2;
  }
  else if (param_2 != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_App_GameApp__OnLateUpdateAnswer_2165aa8(*(long *)(param_1 + 0x18),param_2,0);
  }
  return;
}

