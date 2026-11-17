/* IL2CPP: Dino.BusSand.App.Meta.BattleYachtSpend$$.cctor
void Dino_BusSand_App_Meta_BattleYachtSpend___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleYachtSpend$$.cctor
   void Dino_BusSand_App_Meta_BattleYachtSpend___cctor (const MethodInfo* method); */

void Dino_BusSand_App_Meta_BattleYachtSpend___cctor_2228b64(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  puVar5 = PTR_DAT_04cb2db8;
  puVar4 = PTR_DAT_04cb2db0;
  puVar3 = PTR_DAT_04cb2da8;
  puVar2 = PTR_DAT_04cb2c68;
  puVar1 = PTR_DAT_04caec70;
  if ((bRam0000000004f9be0e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2c68);
    FUN_02132f7c(PTR_DAT_04cb2db8);
    FUN_02132f7c(PTR_DAT_04cb2db0);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cb2da8);
    bRam0000000004f9be0e = 1;
  }
  uVar6 = FUN_02133068(*(undefined8 *)puVar1,7);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
            (uVar6,*(undefined8 *)puVar3,0);
  puVar7 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
  *puVar7 = uVar6;
  thunk_FUN_02134474(puVar7,uVar6);
  uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Collections_Generic_Dictionary_int__long____ctor_3432ea0(uVar6,*(undefined8 *)puVar5);
  puVar7 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
  *puVar7 = uVar6;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar7 >> 0xc & 0x3f),
                 ((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

