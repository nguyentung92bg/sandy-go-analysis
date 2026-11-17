/* IL2CPP: Dino.BusSand.App.CrashContext$$Log
void Dino_BusSand_App_CrashContext__Log (System_String_o* line, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.CrashContext$$Log
   void Dino_BusSand_App_CrashContext__Log (System_String_o* line, const MethodInfo* method); */

void Dino_BusSand_App_CrashContext__Log_216fbd8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  int iStack_44;
  double dStack_28;
  
  puVar1 = PTR_DAT_04cacbc0;
                    /* try { // try from 0226fbf0 to 0236fbf7 has its CatchHandler @ 0226fc14 */
  if ((bRam0000000004f9b8ba & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0226fbf0 with catch @ 0226fc14
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0226fb94 with catch @ 0226fc18
                        */
    FUN_02132f7c(PTR_DAT_04cac450);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0226fb64 with catch @ 0226fc1c
                        */
                    /* try { // try from 0226fc20 to 0236fc27 has its CatchHandler @ 0226fc30 */
    FUN_02132f7c(PTR_DAT_04cacbc8);
                    /* try { // try from 0226fc28 to 0236fc33 has its CatchHandler @ 0226fb30 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0226fc20 with catch @ 0226fc30
                        */
    FUN_02132f7c(PTR_DAT_04cacbd0);
                    /* try { // try from 0226fc34 to 0236fc67 has its CatchHandler @ 0226fc34
                       catch(type#1 @ 00000000) { ... } // from try @ 0226fc34 with catch @ 0226fc34
                       catch(type#1 @ 00000000) { ... } // from try @ 0226fe08 with catch @ 0226fc34
                        */
    FUN_02132f7c(PTR_DAT_04cacbd8);
    FUN_02132f7c(PTR_DAT_04cacbe0);
    FUN_02132f7c(PTR_DAT_04cacbc0);
    FUN_02132f7c(PTR_DAT_04cacbe8);
                    /* try { // try from 0226fc68 to 0236fc77 has its CatchHandler @ 0226fdfc */
    bRam0000000004f9b8ba = 1;
  }
  iStack_44 = 0;
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar3,0);
  if (lVar3 == 0) goto LAB_0226fec8;
  puVar6 = (undefined8 *)(lVar3 + 0x18);
  *puVar6 = param_1;
                    /* try { // try from 0226fc98 to 0236fc9f has its CatchHandler @ 0226fdf8 */
  thunk_FUN_02134474(puVar6,param_1);
  fVar8 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  if (cRam0000000004f9b891 == '\0') {
    FUN_02132f7c(PTR_DAT_04caa200);
    cRam0000000004f9b891 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cacbe8;
  puVar1 = PTR_DAT_04cac450;
  dVar10 = (double)fVar8;
  dVar9 = (double)FUN_049b52f0(dVar10,&dStack_28);
  if (0.0 <= fVar8) {
                    /* try { // try from 0226fd24 to 0236fd4b has its CatchHandler @ 0226fde8 */
    if (dVar9 == 0.5) {
      dVar9 = 1.0;
      goto LAB_0226fd34;
    }
    dStack_28 = (double)(long)(dVar10 + 0.5);
  }
  else {
                    /* try { // try from 0226fd08 to 0236fd0f has its CatchHandler @ 0226fde0 */
    if (dVar9 == -0.5) {
      dVar9 = -1.0;
LAB_0226fd34:
      if (((long)dStack_28 & 1U) != 0) {
        dStack_28 = dStack_28 + dVar9;
      }
    }
    else {
      dStack_28 = (double)(long)(dVar10 + -0.5);
    }
  }
                    /* try { // try from 0226fd60 to 0236fd6b has its CatchHandler @ 0226fde4 */
  iStack_44 = -0x80000000;
  if (dStack_28 != INFINITY) {
    iStack_44 = (int)dStack_28;
  }
  uVar4 = System_Int32__ToString_482d750(&iStack_44,0);
                    /* try { // try from 0226fd8c to 0236fda7 has its CatchHandler @ 0226fdf0 */
  uVar4 = System_String__Concat_46d2b84(uVar4,*(undefined8 *)puVar2,*puVar6,0);
  *puVar6 = uVar4;
  thunk_FUN_02134474(puVar6,uVar4);
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar1;
  }
                    /* try { // try from 0226fdb8 to 0236fdbb has its CatchHandler @ 0226fdec */
                    /* try { // try from 0226fdbc to 0236fdc3 has its CatchHandler @ 0226fdf4 */
  plVar7 = (long *)(lVar3 + 0x10);
  *plVar7 = **(long **)(lVar5 + 0xb8);
  thunk_FUN_02134474(plVar7);
  puVar2 = PTR_DAT_04cacbe0;
  if (*plVar7 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0226fd08 with catch @ 0226fde0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0226fd60 with catch @ 0226fde4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0226fd24 with catch @ 0226fde8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0226fdb8 with catch @ 0226fdec
                        */
    uVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0226fd8c with catch @ 0226fdf0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0226fdbc with catch @ 0226fdf4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0226fc98 with catch @ 0226fdf8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0226fc68 with catch @ 0226fdfc
                        */
                    /* try { // try from 0226fe00 to 0236fe07 has its CatchHandler @ 0226fe10 */
    System_Action___ctor_47b5ed0(uVar4,lVar3,*(undefined8 *)puVar2,0);
                    /* try { // try from 0226fe08 to 0236fe13 has its CatchHandler @ 0226fc34 */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0226fe00 with catch @ 0226fe10
                        */
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_CrashContext__Send_2173340(uVar4);
                    /* try { // try from 0226fec0 to 0236fef3 has its CatchHandler @ 0226fec0
                       catch(type#1 @ 00000000) { ... } // from try @ 0226fec0 with catch @ 0226fec0
                       catch(type#1 @ 00000000) { ... } // from try @ 0226ffb8 with catch @ 0226fec0
                        */
    return;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar5 != 0) {
    if (0x3f < *(int *)(lVar5 + 0x20)) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
        if (lVar5 == 0) goto LAB_0226fec8;
      }
      System_Collections_Generic_Queue_object___Dequeue_2ce3d64
                (lVar5,*(undefined8 *)PTR_DAT_04cacbc8);
      lVar3 = *(long *)puVar1;
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
    if (lVar3 != 0) {
      System_Collections_Generic_Queue_object___Enqueue_2ce3bf4
                (lVar3,*puVar6,*(undefined8 *)PTR_DAT_04cacbd0);
      return;
    }
  }
LAB_0226fec8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

