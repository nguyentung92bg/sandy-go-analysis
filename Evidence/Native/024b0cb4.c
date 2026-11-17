/* IL2CPP: Dino.BusSand.View.GarageView$$EnsureMeshes
void Dino_BusSand_View_GarageView__EnsureMeshes (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GarageView$$EnsureMeshes
   void Dino_BusSand_View_GarageView__EnsureMeshes (const MethodInfo* method); */

void Dino_BusSand_View_GarageView__EnsureMeshes_23b0cb4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_04cbc7f8;
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c972 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc7f8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c972 = 1;
  }
  uVar6 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  uVar6 = Dino_BusSand_View_GarageView__Arch_23b1c0c(_UNK_00e20804,_UNK_00e2038c,_UNK_00e205e8,0x12)
  ;
  uVar6 = Dino_BusSand_View_GarageView__Extrude_23b1eec(_UNK_00e2080c,_UNK_00e207bc,uVar6,1,0);
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar6;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar6);
  uVar6 = Dino_BusSand_View_GarageView__Arch_23b1c0c(_UNK_00e202a4,_UNK_00e20070,_UNK_00e20994,0x12)
  ;
  uVar6 = Dino_BusSand_View_GarageView__Extrude_23b1eec(_UNK_00e20934,_UNK_00e20578,uVar6,1,0);
  puVar5 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  *puVar5 = uVar6;
  thunk_FUN_02134474(puVar5,uVar6);
  uVar6 = Dino_BusSand_View_GarageView__Arch_23b1c0c(_UNK_00e203cc,_UNK_00e20938,_UNK_00e203d0,0x12)
  ;
  uVar4 = Dino_BusSand_View_GarageView__Cap_23b28d4(0,uVar6,1);
  puVar5 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
  *puVar5 = uVar4;
  thunk_FUN_02134474(puVar5,uVar4);
  uVar6 = Dino_BusSand_View_GarageView__Extrude_23b1eec(_UNK_00e20174,_UNK_00e20630,uVar6,0,1);
  puVar5 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
  *puVar5 = uVar6;
  thunk_FUN_02134474(puVar5,uVar6);
  uVar6 = Dino_BusSand_View_GarageView__Quad_23b3078(_UNK_00e206c8,_UNK_00e2065c);
  puVar5 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
  *puVar5 = uVar6;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar5 >> 0xc & 0x3f),
                 ((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

