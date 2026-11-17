/* IL2CPP: Dino.BusSand.View.MechanicLayer$$FindLift
Dino_BusSand_Core_Lift_o* Dino_BusSand_View_MechanicLayer__FindLift (Dino_BusSand_View_MechanicLayer_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MechanicLayer$$FindLift
   Dino_BusSand_Core_Lift_o* Dino_BusSand_View_MechanicLayer__FindLift
   (Dino_BusSand_View_MechanicLayer_o* __this, int32_t id, const MethodInfo* method); */

long Dino_BusSand_View_MechanicLayer__FindLift_23cf0e8(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000004f9c9ef & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd048);
    FUN_02132f7c(PTR_DAT_04cbd050);
    FUN_02132f7c(PTR_DAT_04cbd058);
    FUN_02132f7c(PTR_DAT_04cbd060);
    bRam0000000004f9c9ef = 1;
  }
  puVar2 = PTR_DAT_04cbd050;
  puVar1 = PTR_DAT_04cbd048;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x38), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_48,lVar3,*(undefined8 *)PTR_DAT_04cbd060);
  do {
    uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (&uStack_48,*(undefined8 *)puVar2);
    if ((uVar4 & 1) == 0) {
      lVar3 = 0;
      break;
    }
    if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar3 = lStack_38;
  } while (*(int *)(lStack_38 + 0x10) != param_2);
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_48,*(undefined8 *)puVar1);
  return lVar3;
}

