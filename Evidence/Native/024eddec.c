/* IL2CPP: Dino.BusSand.View.SuctionBeams$$.ctor
void Dino_BusSand_View_SuctionBeams___ctor (Dino_BusSand_View_SuctionBeams_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.SuctionBeams$$.ctor
   void Dino_BusSand_View_SuctionBeams___ctor (Dino_BusSand_View_SuctionBeams_o* __this, const
   MethodInfo* method); */

long Dino_BusSand_View_SuctionBeams___ctor_23eddec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  puVar9 = PTR_DAT_04cbdcd8;
  puVar8 = PTR_DAT_04cbdcd0;
  puVar7 = PTR_DAT_04cbc390;
  puVar6 = PTR_DAT_04cbc380;
  puVar5 = PTR_DAT_04cb7270;
  puVar4 = PTR_DAT_04cb3c10;
  puVar3 = PTR_DAT_04caa1d8;
  puVar2 = PTR_DAT_04caa1d0;
  puVar1 = PTR_DAT_04caa1c8;
  if ((bRam0000000004f9caa9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbdcd8);
    FUN_02132f7c(PTR_DAT_04cbdcd0);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04cb7270);
    FUN_02132f7c(PTR_DAT_04cb3c10);
    FUN_02132f7c(PTR_DAT_04cbc380);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04cbc390);
    FUN_02132f7c(PTR_DAT_04caa1d0);
    FUN_02132f7c(PTR_DAT_04caa1d8);
    bRam0000000004f9caa9 = 1;
  }
  uVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar8);
  System_Collections_Generic_Dictionary_int__object____ctor_343658c(uVar10,*(undefined8 *)puVar9);
  *(undefined8 *)(param_1 + 0x20) = uVar10;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x20),uVar10);
  uVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_Vector3____ctor_3af944c(uVar10,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x40) = uVar10;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x40),uVar10);
  uVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_Vector2____ctor_3af6bb0(uVar10,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x48) = uVar10;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x48),uVar10);
  uVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar7);
  System_Collections_Generic_List_Color____ctor_3a01b34(uVar10,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x50) = uVar10;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x50),uVar10);
  uVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_List_int____ctor_3a2b7dc(uVar10,*(undefined8 *)PTR_DAT_04cad6e8);
  *(undefined8 *)(param_1 + 0x58) = uVar10;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x58),uVar10);
  *(undefined8 *)(param_1 + 0x60) = _UNK_00e6a000;
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004fa830a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004fa830a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  return param_1;
}

