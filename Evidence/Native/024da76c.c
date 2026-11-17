/* IL2CPP: Dino.BusSand.View.PickUpClaw$$Find
UnityEngine_Transform_o* Dino_BusSand_View_PickUpClaw__Find (UnityEngine_Transform_o* t, System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PickUpClaw$$Find
   UnityEngine_Transform_o* Dino_BusSand_View_PickUpClaw__Find (UnityEngine_Transform_o* t,
   System_String_o* name, const MethodInfo* method); */

long Dino_BusSand_View_PickUpClaw__Find_23da76c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  if ((bRam0000000004f9ca41 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ca41 = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar4 = UnityEngine_Object__get_name_43c71a4(param_1,0);
  uVar5 = System_String__op_Equality_46d1108(uVar4,param_2,0);
  if ((uVar5 & 1) == 0) {
    iVar2 = UnityEngine_Transform__get_childCount_43d4480(param_1,0);
    puVar1 = PTR_DAT_04ca9ae8;
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        uVar4 = UnityEngine_Transform__GetChild_43d5294(param_1,iVar2,0);
        lVar6 = Dino_BusSand_View_PickUpClaw__Find_23da76c(uVar4,param_2);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
        if ((uVar5 & 1) != 0) {
          return lVar6;
        }
                    /* try { // try from 024da830 to 025da837 has its CatchHandler @ 024da950 */
        iVar2 = iVar2 + 1;
        iVar3 = UnityEngine_Transform__get_childCount_43d4480(param_1,0);
      } while (iVar2 < iVar3);
    }
    param_1 = 0;
  }
                    /* try { // try from 024da854 to 025da857 has its CatchHandler @ 024da940 */
                    /* try { // try from 024da858 to 025da867 has its CatchHandler @ 024da94c */
  return param_1;
}

