/* IL2CPP: Dino.BusSand.Core.Lift$$get_Remaining
int32_t Dino_BusSand_Core_Lift__get_Remaining (Dino_BusSand_Core_Lift_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Lift$$get_Remaining
   int32_t Dino_BusSand_Core_Lift__get_Remaining (Dino_BusSand_Core_Lift_o* __this, const
   MethodInfo* method); */

int Dino_BusSand_Core_Lift__get_Remaining_242e29c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000004f9cbf6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbeda8);
    FUN_02132f7c(PTR_DAT_04cbedb8);
    FUN_02132f7c(PTR_DAT_04cbedc8);
    FUN_02132f7c(PTR_DAT_04cbedd0);
    FUN_02132f7c(PTR_DAT_04cbef30);
    bRam0000000004f9cbf6 = 1;
  }
  puVar2 = PTR_DAT_04cbedb8;
  puVar1 = PTR_DAT_04cbeda8;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_48,*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_04cbedd0);
    iVar4 = 0;
    while( true ) {
      uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_48,*(undefined8 *)puVar2);
      if ((uVar3 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_48,*(undefined8 *)puVar1);
        return iVar4;
      }
      if (lStack_38 == 0) break;
      iVar4 = *(int *)(lStack_38 + 0x18) + iVar4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

