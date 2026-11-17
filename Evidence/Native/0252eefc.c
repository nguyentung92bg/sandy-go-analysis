/* IL2CPP: Dino.BusSand.Core.Lane$$get_PathLength
double Dino_BusSand_Core_Lane__get_PathLength (Dino_BusSand_Core_Lane_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Lane$$get_PathLength
   double Dino_BusSand_Core_Lane__get_PathLength (Dino_BusSand_Core_Lane_o* __this, const
   MethodInfo* method); */

undefined1  [16]
Dino_BusSand_Core_Lane__get_PathLength_242eefc(undefined1 param_1 [16],double param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  
                    /* try { // try from 0252ef20 to 0262ef27 has its CatchHandler @ 0252f740 */
  if ((bRam0000000004f9cc04 & 1) == 0) {
                    /* try { // try from 0252ef28 to 0262f72b has its CatchHandler @ 0252e578 */
    FUN_02132f7c(PTR_DAT_04cbef60);
    FUN_02132f7c(PTR_DAT_04cbd270);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cc04 = 1;
  }
  puVar3 = PTR_DAT_04cbd270;
  puVar2 = PTR_DAT_04caa200;
  lVar4 = *(long *)(param_3 + 0x18);
  if (lVar4 != 0) {
    dVar10 = 0.0;
    iVar5 = 0;
    do {
      iVar1 = iVar5 + 1;
      if (*(int *)(lVar4 + 0x18) <= iVar1) {
        auVar8._8_8_ = 0;
        auVar8._0_8_ = dVar10;
        return auVar8;
      }
      dVar6 = (double)System_Collections_Generic_List_ValueTuple_double__double____get_Item_39a197c
                                (lVar4,iVar1,*(undefined8 *)puVar3);
      if (*(long *)(param_3 + 0x18) == 0) break;
      dVar7 = (double)System_Collections_Generic_List_ValueTuple_double__double____get_Item_39a197c
                                (*(long *)(param_3 + 0x18),iVar5,*(undefined8 *)puVar3);
      if (*(long *)(param_3 + 0x18) == 0) break;
      System_Collections_Generic_List_ValueTuple_double__double____get_Item_39a197c
                (*(long *)(param_3 + 0x18),iVar1,*(undefined8 *)puVar3);
      if (*(long *)(param_3 + 0x18) == 0) break;
      dVar9 = param_2;
      System_Collections_Generic_List_ValueTuple_double__double____get_Item_39a197c
                (*(long *)(param_3 + 0x18),iVar5,*(undefined8 *)puVar3);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar4 = *(long *)(param_3 + 0x18);
      iVar5 = iVar5 + 1;
      param_2 = (param_2 - dVar9) * (param_2 - dVar9);
      dVar10 = dVar10 + SQRT((dVar6 - dVar7) * (dVar6 - dVar7) + param_2);
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

