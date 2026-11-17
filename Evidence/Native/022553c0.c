/* IL2CPP: Dino.BusSand.App.MiniJson$$ParseString
System_String_o* Dino_BusSand_App_MiniJson__ParseString (System_String_o* s, int32_t* i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.MiniJson$$ParseString
   System_String_o* Dino_BusSand_App_MiniJson__ParseString (System_String_o* s, int32_t* i, const
   MethodInfo* method); */

void Dino_BusSand_App_MiniJson__ParseString_21553c0(long param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 uVar7;
  
  puVar3 = PTR_DAT_04ca9b78;
  if ((bRam0000000004f9b7da & 1) == 0) {
                    /* catch() { ... } // from try @ 022553b0 with catch @ 022553ec */
    FUN_02132f7c(PTR_DAT_04ca9b78);
    bRam0000000004f9b7da = 1;
  }
  plVar6 = (long *)thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Text_StringBuilder___ctor_46db61c(plVar6,0);
  *param_2 = *param_2 + 1;
  if (param_1 != 0) {
LAB_02255420:
    iVar2 = *param_2;
    if (iVar2 < *(int *)(param_1 + 0x10)) {
      *param_2 = iVar2 + 1;
      uVar4 = System_String__get_Chars_46ccb24(param_1,iVar2,0);
      if ((uVar4 & 0xffff) == 0x5c) {
        iVar2 = *param_2;
        if (*(int *)(param_1 + 0x10) <= iVar2) goto LAB_022554b4;
        *param_2 = iVar2 + 1;
        uVar4 = System_String__get_Chars_46ccb24(param_1,iVar2,0);
        uVar1 = uVar4 & 0xffff;
        if (uVar1 < 0x67) {
          if (uVar1 == 0x62) {
            if (plVar6 != (long *)0x0) {
                    /* catch() { ... } // from try @ 0225552c with catch @ 02255568 */
              uVar4 = 8;
              goto LAB_022554c0;
            }
            goto LAB_022555b4;
          }
          if (uVar1 != 0x66) goto LAB_02255558;
          if (plVar6 == (long *)0x0) goto LAB_022555b4;
          uVar4 = 0xc;
        }
        else {
          if (0x73 < uVar1) {
            if (uVar1 == 0x74) {
              if (plVar6 != (long *)0x0) {
                uVar4 = 9;
                goto LAB_022554c0;
              }
              goto LAB_022555b4;
            }
            if (uVar1 != 0x75) goto LAB_02255558;
            if (*param_2 + 4 <= *(int *)(param_1 + 0x10)) {
              uVar7 = System_String__Substring_46d4848(param_1,*param_2,4,0);
                    /* try { // try from 0225552c to 02355537 has its CatchHandler @ 02255568 */
              uVar5 = System_Int32__Parse_482db40(uVar7,0x203,0);
              if (plVar6 == (long *)0x0) goto LAB_022555b4;
                    /* try { // try from 02255538 to 02355583 has its CatchHandler @ 022554b8 */
              System_Text_StringBuilder__Append_46dd710(plVar6,uVar5,0);
              *param_2 = *param_2 + 4;
            }
            goto LAB_02255420;
          }
          if (uVar1 == 0x6e) {
            if (plVar6 == (long *)0x0) goto LAB_022555b4;
            uVar4 = 10;
          }
          else {
            if (uVar1 != 0x72) {
LAB_02255558:
              if (plVar6 != (long *)0x0) goto LAB_022554c0;
              goto LAB_022555b4;
            }
            if (plVar6 == (long *)0x0) goto LAB_022555b4;
            uVar4 = 0xd;
          }
        }
      }
      else {
        if ((uVar4 & 0xffff) == 0x22) goto LAB_02255594;
LAB_022554b4:
        if (plVar6 == (long *)0x0) goto LAB_022555b4;
      }
LAB_022554c0:
      System_Text_StringBuilder__Append_46dd710(plVar6,uVar4,0);
      goto LAB_02255420;
    }
LAB_02255594:
    if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x022555b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      return;
    }
  }
LAB_022555b4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

