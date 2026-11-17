/* IL2CPP: Dino.BusSand.App.Gameplay.MechanicIntro$$TextOf
System_String_o* Dino_BusSand_App_Gameplay_MechanicIntro__TextOf (System_String_o* mechanic, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.MechanicIntro$$TextOf
   System_String_o* Dino_BusSand_App_Gameplay_MechanicIntro__TextOf (System_String_o* mechanic,
   const MethodInfo* method); */

undefined8 Dino_BusSand_App_Gameplay_MechanicIntro__TextOf_22a0750(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_28;
  
  puVar2 = PTR_DAT_04cb1948;
  puVar1 = PTR_DAT_04ca9d18;
  if ((bRam0000000004f9c25a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cb1948);
    bRam0000000004f9c25a = 1;
  }
  uVar5 = System_String__Concat_46c82e0(*(undefined8 *)puVar2,param_1,0);
  lVar7 = *(long *)puVar1;
  lVar6 = *(long *)(lVar7 + 0x38);
  if (lVar6 == 0) {
    FUN_0216b4cc(lVar7);
    lVar6 = *(long *)(lVar7 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0216b470();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cab550;
  lVar6 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0216b470();
  }
  lVar6 = **(long **)(lVar6 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  if ((bRam0000000004f9b81c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab550,lVar6,0);
    FUN_02132f7c(PTR_DAT_04cac078);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9b81c = 1;
  }
  uStack_28 = 0;
  uVar3 = System_String__IsNullOrEmpty_46d2084(uVar5,0);
  puVar1 = PTR_DAT_04cab550;
  if ((uVar3 & 1) != 0) {
    return *(undefined8 *)PTR_DAT_04ca9c30;
  }
  if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = Dino_BusSand_App_Lang__Current_215f3d0();
  uVar3 = Dino_BusSand_App_Lang__Text_215f904(uVar4,uVar5,&uStack_28);
  if ((uVar3 & 1) == 0) {
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar1;
    }
    uVar3 = System_String__op_Equality_46d1108
                      (**(undefined8 **)(lVar7 + 0xb8),*(undefined8 *)PTR_DAT_04cac078,0);
    if ((uVar3 & 1) != 0) {
      return uVar5;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = Dino_BusSand_App_Lang__English_215f81c();
    uVar3 = Dino_BusSand_App_Lang__Text_215f904(uVar4,uVar5,&uStack_28);
    if ((uVar3 & 1) == 0) {
      return uVar5;
    }
  }
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x18) != 0)) {
    uStack_28 = System_String__Format_46d3570(uStack_28,lVar6,0);
  }
  return uStack_28;
}

