/* IL2CPP: Dino.BusSand.App.BootTrace$$Add
void Dino_BusSand_App_BootTrace__Add (System_String_o* what, float ms, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.BootTrace$$Add
   void Dino_BusSand_App_BootTrace__Add (System_String_o* what, float ms, const MethodInfo* method);
    */

void Dino_BusSand_App_BootTrace__Add_214e070(float param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  float fStack_24;
  
  puVar2 = PTR_DAT_04cab240;
  fStack_24 = param_1;
  if ((bRam0000000004f9b7b2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab240);
    FUN_02132f7c(PTR_DAT_04caa370);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cab260);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cab268);
    FUN_02132f7c(PTR_DAT_04cab270);
    FUN_02132f7c(PTR_DAT_04cab278);
    FUN_02132f7c(PTR_DAT_04cab280);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cab288);
    bRam0000000004f9b7b2 = 1;
  }
  lVar3 = *(long *)puVar2;
  uStack_50 = 0;
  uStack_48 = 0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  if (*(char *)(*(long *)(lVar3 + 0xb8) + 0x24) != '\0') {
    return;
  }
  uVar9 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0224e1c0 with catch @ 0224e16c */
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  lVar3 = **(long **)(lVar3 + 0xb8);
  uStack_48 = 0;
  uStack_50 = param_2;
  thunk_FUN_02134474(&uStack_50,param_2);
  uStack_48 = CONCAT44(param_1,uVar9);
  if (lVar3 != 0) {
    lVar7 = *(long *)(lVar3 + 0x10);
    lVar8 = *(long *)PTR_DAT_04cab260;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar7 != 0) {
                    /* try { // try from 0224e1b8 to 0234e1bf has its CatchHandler @ 0224e20c */
      uVar1 = *(uint *)(lVar3 + 0x18);
                    /* try { // try from 0224e1c0 to 0234e21f has its CatchHandler @ 0224e16c */
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        lVar7 = lVar7 + (long)(int)uVar1 * 0x10;
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        puVar4 = (undefined8 *)(lVar7 + 0x20);
        *puVar4 = uStack_50;
        *(undefined8 *)(lVar7 + 0x28) = uStack_48;
        thunk_FUN_02134474(puVar4,0);
      }
      else {
        System_Collections_Generic_List_BootTrace_Entry___AddWithResize_3b180f0
                  (lVar3,uStack_50,uStack_48,
                   *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      puVar4 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *puVar4 = param_2;
      thunk_FUN_02134474(puVar4,param_2);
                    /* catch() { ... } // from try @ 0224e1b8 with catch @ 0224e20c */
      uVar5 = System_String__op_Equality_46d1108(param_2,*(undefined8 *)PTR_DAT_04cab280,0);
      lVar3 = *(long *)puVar2;
                    /* try { // try from 0224e22c to 0234e22f has its CatchHandler @ 0224e238 */
      if ((uVar5 & 1) != 0) {
        if (*(int *)(lVar3 + 0xe4) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0224e22c with catch @ 0224e238
                        */
          thunk_FUN_0218fdac();
                    /* try { // try from 0224e23c to 0234e26b has its CatchHandler @ 0224e23c
                       catch() { ... } // from try @ 0224e23c with catch @ 0224e23c
                       catch() { ... } // from try @ 0224e278 with catch @ 0224e23c */
          lVar3 = *(long *)puVar2;
        }
        lVar7 = *(long *)(lVar3 + 0xb8);
        if (*(int *)(lVar7 + 0x30) == 0) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar3 = *(long *)puVar2;
            lVar7 = *(long *)(lVar3 + 0xb8);
          }
          *(undefined4 *)(lVar7 + 0x30) = 1;
        }
      }
                    /* try { // try from 0224e26c to 0234e277 has its CatchHandler @ 0224e298 */
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = Dino_BusSand_App_BootTrace__get_Verbose_214dec8();
                    /* try { // try from 0224e278 to 0234e2b3 has its CatchHandler @ 0224e23c */
      if ((uVar5 & 1) == 0) {
        return;
      }
      lVar3 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,5);
      if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 0224e26c with catch @ 0224e298 */
        if (*(int *)(lVar3 + 0x18) != 0) {
          *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR_DAT_04cab268;
                    /* try { // try from 0224e2b4 to 0234e327 has its CatchHandler @ 0224e2b4
                       catch() { ... } // from try @ 0224e2b4 with catch @ 0224e2b4
                       catch() { ... } // from try @ 0224e33c with catch @ 0224e2b4 */
          thunk_FUN_02134474();
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar6 = Dino_BusSand_App_BootTrace__F_214eaf0(uVar9);
          if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
            *(undefined8 *)(lVar3 + 0x28) = uVar6;
            thunk_FUN_02134474((undefined8 *)(lVar3 + 0x28),uVar6);
            puVar2 = PTR_DAT_04cab270;
            if (2 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)PTR_DAT_04cab270;
              thunk_FUN_02134474((undefined8 *)(lVar3 + 0x30));
              if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
                    /* try { // try from 0224e328 to 0234e33b has its CatchHandler @ 0224e350 */
                *(undefined8 *)(lVar3 + 0x38) = param_2;
                thunk_FUN_02134474((undefined8 *)(lVar3 + 0x38),param_2);
                    /* try { // try from 0224e33c to 0234e367 has its CatchHandler @ 0224e2b4 */
                if (0.0 <= fStack_24) {
                    /* catch() { ... } // from try @ 0224e328 with catch @ 0224e350 */
                  if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar6 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
                  uVar6 = System_Single__ToString_4842760
                                    (&fStack_24,*(undefined8 *)PTR_DAT_04cab288,uVar6,0);
                  uVar6 = System_String__Concat_46d2b84
                                    (*(undefined8 *)puVar2,uVar6,*(undefined8 *)PTR_DAT_04cab278,0);
                }
                else {
                  uVar6 = *(undefined8 *)PTR_DAT_04ca9c30;
                }
                if (4 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined8 *)(lVar3 + 0x40) = uVar6;
                  thunk_FUN_02134474();
                  uVar6 = System_String__Concat_46d31f0(lVar3,0);
                  if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
                  }
                  UnityEngine_Debug__Log_4360fc8(uVar6,0);
                  return;
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

