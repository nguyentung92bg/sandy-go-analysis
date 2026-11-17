/* IL2CPP: Dino.BusSand.Core.Lane$$TryEndCap
bool Dino_BusSand_Core_Lane__TryEndCap (System_Collections_Generic_List_ValueTuple_double__double___o* path, Dino_BusSand_Core_BusObb_o* cap, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.Lane$$TryEndCap
   bool Dino_BusSand_Core_Lane__TryEndCap
   (System_Collections_Generic_List_ValueTuple_double__double___o* path, Dino_BusSand_Core_BusObb_o*
   cap, const MethodInfo* method); */

undefined8
Dino_BusSand_Core_Lane__TryEndCap_242f7dc
          (undefined1 param_1 [16],double param_2,long param_3,undefined8 *param_4)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000004f9cc0e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbef60);
    FUN_02132f7c(PTR_DAT_04cbd270);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cc0e = 1;
  }
  param_4[3] = 0;
  param_4[2] = 0;
  param_4[5] = 0;
  param_4[4] = 0;
  param_4[1] = 0;
  *param_4 = 0;
  puVar1 = PTR_DAT_04cbd270;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (1 < *(int *)(param_3 + 0x18)) {
    dVar2 = (double)System_Collections_Generic_List_ValueTuple_double__double____get_Item_39a197c
                              (param_3,1,*(undefined8 *)PTR_DAT_04cbd270);
    dVar3 = (double)System_Collections_Generic_List_ValueTuple_double__double____get_Item_39a197c
                              (param_3,0,*(undefined8 *)puVar1);
    dVar2 = dVar2 - dVar3;
    System_Collections_Generic_List_ValueTuple_double__double____get_Item_39a197c
              (param_3,1,*(undefined8 *)puVar1);
    dVar3 = param_2;
    System_Collections_Generic_List_ValueTuple_double__double____get_Item_39a197c
              (param_3,0,*(undefined8 *)puVar1);
    param_2 = param_2 - dVar3;
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    dVar3 = SQRT(dVar2 * dVar2 + param_2 * param_2);
    if (_UNK_00e6a008 <= dVar3) {
      dVar5 = _UNK_00e6a008;
      dVar4 = (double)System_Collections_Generic_List_ValueTuple_double__double____get_Item_39a197c
                                (param_3,0,*(undefined8 *)puVar1);
      System_Collections_Generic_List_ValueTuple_double__double____get_Item_39a197c
                (param_3,0,*(undefined8 *)puVar1);
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      Dino_BusSand_Core_BusObb___ctor_242201c
                (dVar4 - (dVar2 / dVar3) * 0.25 * 0.5,dVar5 - (param_2 / dVar3) * 0.25 * 0.5,
                 dVar2 / dVar3,param_2 / dVar3,0x3fc0000000000000,_UNK_00e69f78,&uStack_70,0);
      param_4[1] = uStack_68;
      *param_4 = uStack_70;
      param_4[3] = uStack_58;
      param_4[2] = uStack_60;
      param_4[5] = uStack_48;
      param_4[4] = uStack_50;
      return 1;
    }
  }
  return 0;
}

