/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow$$.cctor
void Dino_BusSand_App_UI_LevelEnterFlow___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow$$.cctor
   void Dino_BusSand_App_UI_LevelEnterFlow___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_LevelEnterFlow___cctor_233df50(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  puVar6 = PTR_DAT_04cb9508;
  puVar5 = PTR_DAT_04cb9500;
  puVar4 = PTR_DAT_04caec70;
  puVar3 = PTR_DAT_04cad6e8;
  puVar2 = PTR_DAT_04cacb20;
  puVar1 = PTR_DAT_04caa1c8;
  if ((bRam0000000004f9c66e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cacb20);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04cb9500);
    FUN_02132f7c(PTR_DAT_04cb9508);
    bRam0000000004f9c66e = 1;
  }
  uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_List_int____ctor_3a2b7dc(uVar7,*(undefined8 *)puVar3);
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar7;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar7);
  uVar7 = FUN_02133068(*(undefined8 *)puVar4,4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
            (uVar7,*(undefined8 *)puVar5,0);
  puVar8 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
  *puVar8 = uVar7;
  thunk_FUN_02134474(puVar8,uVar7);
  uVar7 = FUN_02133068(*(undefined8 *)puVar4,4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
            (uVar7,*(undefined8 *)puVar6,0);
  puVar8 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
  *puVar8 = uVar7;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar8 >> 0xc & 0x3f),
                 ((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

