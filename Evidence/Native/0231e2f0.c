/* IL2CPP: Dino.BusSand.App.Meta.ActivityContinueFeature$$Truncate
System_Collections_Generic_List_IStakeActivity__o* Dino_BusSand_App_Meta_ActivityContinueFeature__Truncate (System_Collections_Generic_List_IStakeActivity__o* l, int32_t max, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ActivityContinueFeature$$Truncate
   System_Collections_Generic_List_IStakeActivity__o*
   Dino_BusSand_App_Meta_ActivityContinueFeature__Truncate
   (System_Collections_Generic_List_IStakeActivity__o* l, int32_t max, const MethodInfo* method); */

long Dino_BusSand_App_Meta_ActivityContinueFeature__Truncate_221e2f0(long param_1,int param_2)

{
  int iVar1;
  
                    /* try { // try from 0231e2f8 to 0241e303 has its CatchHandler @ 0231e438 */
                    /* try { // try from 0231e304 to 0241e40b has its CatchHandler @ 0231e2a8 */
  if ((bRam0000000004f9bdb6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb28f8);
    FUN_02132f7c(PTR_DAT_04cada88);
    bRam0000000004f9bdb6 = 1;
  }
  if (0 < param_2) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    iVar1 = *(int *)(param_1 + 0x18) - param_2;
    if (iVar1 != 0 && param_2 <= *(int *)(param_1 + 0x18)) {
      System_Collections_Generic_List_object___RemoveRange_3a83438
                (param_1,param_2,iVar1,*(undefined8 *)PTR_DAT_04cb28f8);
    }
  }
  return param_1;
}

