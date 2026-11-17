/* IL2CPP: Dino.BusSand.App.GameApp.<>c$$<OnPlayState>b__96_0
System_String_o* Dino_BusSand_App_GameApp___c___OnPlayState_b__96_0 (Dino_BusSand_App_GameApp___c_o* __this, System_String_o* k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp.<>c$$<OnPlayState>b__96_0
   System_String_o* Dino_BusSand_App_GameApp___c___OnPlayState_b__96_0
   (Dino_BusSand_App_GameApp___c_o* __this, System_String_o* k, const MethodInfo* method); */

undefined8
Dino_BusSand_App_GameApp___c___OnPlayState_b__96_0_216a74c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_04ca9d18;
  if ((bRam0000000004f9b89a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cab550);
    bRam0000000004f9b89a = 1;
  }
  lVar5 = *(long *)puVar1;
  lVar4 = *(long *)(lVar5 + 0x38);
  if (lVar4 == 0) {
    FUN_0216b4cc(lVar5);
    lVar4 = *(long *)(lVar5 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0216b470();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cab550;
  lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0216b470();
  }
  lVar4 = **(long **)(lVar4 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  if ((bRam0000000004f9b81c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab550,lVar4,0);
    FUN_02132f7c(PTR_DAT_04cac078);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9b81c = 1;
  }
  uStack_28 = 0;
  uVar2 = System_String__IsNullOrEmpty_46d2084(param_2,0);
  puVar1 = PTR_DAT_04cab550;
  if ((uVar2 & 1) != 0) {
    return *(undefined8 *)PTR_DAT_04ca9c30;
  }
  if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = Dino_BusSand_App_Lang__Current_215f3d0();
  uVar2 = Dino_BusSand_App_Lang__Text_215f904(uVar3,param_2,&uStack_28);
  if ((uVar2 & 1) == 0) {
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar1;
    }
    uVar2 = System_String__op_Equality_46d1108
                      (**(undefined8 **)(lVar5 + 0xb8),*(undefined8 *)PTR_DAT_04cac078,0);
    if ((uVar2 & 1) != 0) {
      return param_2;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = Dino_BusSand_App_Lang__English_215f81c();
    uVar2 = Dino_BusSand_App_Lang__Text_215f904(uVar3,param_2,&uStack_28);
    if ((uVar2 & 1) == 0) {
      return param_2;
    }
  }
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x18) != 0)) {
    uStack_28 = System_String__Format_46d3570(uStack_28,lVar4,0);
  }
  return uStack_28;
}

