/* IL2CPP: Dino.BusSand.App.BootTrace$$.cctor
void Dino_BusSand_App_BootTrace___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.BootTrace$$.cctor
   void Dino_BusSand_App_BootTrace___cctor (const MethodInfo* method); */

void Dino_BusSand_App_BootTrace___cctor_214f460(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  puVar6 = PTR_DAT_04cab378;
  puVar5 = PTR_DAT_04cab370;
  puVar4 = PTR_DAT_04cab368;
  puVar3 = PTR_DAT_04cab360;
  puVar2 = PTR_DAT_04cab258;
  puVar1 = PTR_DAT_04cab240;
  if ((bRam0000000004f9b7b5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab240);
    FUN_02132f7c(PTR_DAT_04cab378);
    FUN_02132f7c(PTR_DAT_04cab370);
    FUN_02132f7c(PTR_DAT_04cab368);
    FUN_02132f7c(PTR_DAT_04cab360);
    FUN_02132f7c(PTR_DAT_04cab258);
    bRam0000000004f9b7b5 = 1;
  }
  uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_BootTrace_Entry____ctor_3b17844(uVar7,*(undefined8 *)puVar4);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar7;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar7);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = *(undefined8 *)puVar2;
  thunk_FUN_02134474();
  uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Collections_Generic_Dictionary_object__ValueTuple_int__float_____ctor_347d630
            (uVar7,*(undefined8 *)puVar6);
                    /* try { // try from 0224f55c to 0234f5ab has its CatchHandler @ 0224f55c
                       catch() { ... } // from try @ 0224f55c with catch @ 0224f55c
                       catch() { ... } // from try @ 0224f5d0 with catch @ 0224f55c
                       catch() { ... } // from try @ 0224f6ac with catch @ 0224f55c */
  puVar8 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
  *puVar8 = uVar7;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar8 >> 0xc & 0x3f),
                 ((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

