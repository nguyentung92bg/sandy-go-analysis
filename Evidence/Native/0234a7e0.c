/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$QueueResultCommand
void Dino_BusSand_App_Meta_PassportFeature__QueueResultCommand (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$QueueResultCommand
   void Dino_BusSand_App_Meta_PassportFeature__QueueResultCommand
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_PassportFeature__QueueResultCommand_224a7e0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
                    /* try { // try from 0234a7e0 to 0244a81b has its CatchHandler @ 0234a2bc */
  puVar2 = PTR_DAT_04cac690;
  if ((bRam0000000004f9bf8f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac690);
    bRam0000000004f9bf8f = 1;
  }
                    /* try { // try from 0234a81c to 0244a827 has its CatchHandler @ 0234a904 */
  uVar5 = *(undefined8 *)puVar2;
  if ((bRam0000000004f9bf8a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab718);
    FUN_02132f7c(PTR_DAT_04cad298);
    bRam0000000004f9bf8a = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar3 = System_Collections_Generic_List_object___Contains_3a81f90
                      (*(long *)(param_1 + 0x20),uVar5,*(undefined8 *)PTR_DAT_04cad298);
    if ((uVar3 & 1) != 0) {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x20);
    if (lVar6 != 0) {
      lVar7 = *(long *)(lVar6 + 0x10);
      lVar8 = *(long *)PTR_DAT_04cab718;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          puVar4 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
          *puVar4 = uVar5;
        }
        else {
          uVar1 = *(uint *)(lVar6 + 0x18);
          System_Collections_Generic_List_object___EnsureCapacity_3a821d8
                    (lVar6,uVar1 + 1,
                     *(undefined8 *)
                      (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) +
                                                    0x70) + 0x20) + 0xc0) + 0x78));
          lVar7 = *(long *)(lVar6 + 0x10);
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (*(uint *)(lVar7 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          puVar4 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
          *puVar4 = uVar5;
        }
        if (iRam00000000051c1b10 != 0) {
          FUN_02220bf0(1L << ((ulong)puVar4 >> 0xc & 0x3f),
                       ((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

