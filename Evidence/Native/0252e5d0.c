/* IL2CPP: Dino.BusSand.Core.Lift$$Prune
void Dino_BusSand_Core_Lift__Prune (Dino_BusSand_Core_Lift_o* __this, Dino_BusSand_Core_TruckGrid_o* yard, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Lift$$Prune
   void Dino_BusSand_Core_Lift__Prune (Dino_BusSand_Core_Lift_o* __this,
   Dino_BusSand_Core_TruckGrid_o* yard, const MethodInfo* method); */

void Dino_BusSand_Core_Lift__Prune_242e5d0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uStack_38;
  
  if ((bRam0000000004f9cbfb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2b70);
    FUN_02132f7c(PTR_DAT_04cae228);
    FUN_02132f7c(PTR_DAT_04cae230);
    bRam0000000004f9cbfb = 1;
  }
  puVar2 = PTR_DAT_04cb2b70;
  puVar1 = PTR_DAT_04cae230;
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x68) == 0) {
LAB_0252e6ac:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar5 = *(int *)(*(long *)(param_1 + 0x68) + 0x18);
  if (-1 < iVar5 + -1) {
    do {
      if (*(long *)(param_1 + 0x68) == 0) goto LAB_0252e6ac;
      iVar5 = iVar5 + -1;
      uVar3 = System_Collections_Generic_List_int___get_Item_3a2bd74
                        (*(long *)(param_1 + 0x68),iVar5,*(undefined8 *)puVar1);
      if (param_2 == 0) goto LAB_0252e6ac;
      uVar4 = Dino_BusSand_Core_TruckGrid__TryGet_241d34c(param_2,uVar3,&uStack_38,0);
      if ((uVar4 & 1) == 0) {
        if (*(long *)(param_1 + 0x68) == 0) goto LAB_0252e6ac;
        System_Collections_Generic_List_int___RemoveAt_3a2d7c4
                  (*(long *)(param_1 + 0x68),iVar5,*(undefined8 *)puVar2);
      }
    } while (0 < iVar5);
  }
  return;
}

