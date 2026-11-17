/* IL2CPP: Dino.BusSand.App.CrashContext$$KeepBootOpen
void Dino_BusSand_App_CrashContext__KeepBootOpen (System_String_o* step, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.CrashContext$$KeepBootOpen
   void Dino_BusSand_App_CrashContext__KeepBootOpen (System_String_o* step, const MethodInfo*
   method); */

void Dino_BusSand_App_CrashContext__KeepBootOpen_21737b8(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  int iStack_3c;
  double dStack_38;
  
  puVar1 = PTR_DAT_04cac9e0;
  if ((bRam0000000004f9b8bc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab270);
    FUN_02132f7c(PTR_DAT_04cacd58);
    FUN_02132f7c(PTR_DAT_04cacdd0);
    FUN_02132f7c(PTR_DAT_04cac9e0);
    bRam0000000004f9b8bc = 1;
  }
  iStack_3c = 0;
  uVar2 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)puVar1,0);
  if ((uVar2 & 1) != 0) {
    UnityEngine_PlayerPrefs__DeleteKey_43b5c98(*(undefined8 *)PTR_DAT_04cacd58,0);
    goto LAB_02273964;
  }
  fVar4 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  if (cRam0000000004f9b891 == '\0') {
    FUN_02132f7c(PTR_DAT_04caa200);
    cRam0000000004f9b891 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  dVar6 = (double)fVar4;
  dVar5 = (double)FUN_049b52f0(dVar6,&dStack_38);
  if (0.0 <= fVar4) {
    if (dVar5 == 0.5) {
      dVar5 = 1.0;
      goto LAB_022738d4;
    }
    dStack_38 = (double)(long)(dVar6 + 0.5);
  }
  else if (dVar5 == -0.5) {
    dVar5 = -1.0;
LAB_022738d4:
    if (((long)dStack_38 & 1U) != 0) {
      dStack_38 = dStack_38 + dVar5;
    }
  }
  else {
    dStack_38 = (double)(long)(dVar6 + -0.5);
  }
                    /* catch() { ... } // from try @ 0227394c with catch @ 02273908 */
  iStack_3c = -0x80000000;
  if (dStack_38 != INFINITY) {
    iStack_3c = (int)dStack_38;
  }
  uVar3 = System_Int32__ToString_482d750(&iStack_3c,0);
                    /* try { // try from 02273940 to 0237394b has its CatchHandler @ 022739f0 */
  uVar3 = System_String__Concat_46d30e8
                    (param_1,*(undefined8 *)PTR_DAT_04cab270,uVar3,*(undefined8 *)PTR_DAT_04cacdd0,0
                    );
                    /* try { // try from 0227394c to 02373a0f has its CatchHandler @ 02273908 */
  UnityEngine_PlayerPrefs__SetString_43b5744(*(undefined8 *)PTR_DAT_04cacd58,uVar3,0);
LAB_02273964:
  UnityEngine_PlayerPrefs__Save_43b5e3c(0);
  return;
}

