/* IL2CPP: Dino.BusSand.App.Analytics$$BeginAttempt
void Dino_BusSand_App_Analytics__BeginAttempt (int32_t level, int32_t designLevel, int32_t gameType, int32_t startNum, int32_t playIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Analytics$$BeginAttempt
   void Dino_BusSand_App_Analytics__BeginAttempt (int32_t level, int32_t designLevel, int32_t
   gameType, int32_t startNum, int32_t playIndex, const MethodInfo* method); */

void Dino_BusSand_App_Analytics__BeginAttempt_216ff2c
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 auStack_50 [16];
  
  puVar1 = PTR_DAT_04cac5c0;
  if ((bRam0000000004f9b8cd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    bRam0000000004f9b8cd = 1;
  }
                    /* try { // try from 0226ff80 to 0236ff87 has its CatchHandler @ 0226ffa4 */
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  auStack_50 = System_Guid__NewGuid_48283c0(0);
  uVar2 = System_Guid__ToString_482a234(auStack_50,0);
  lVar4 = *(long *)puVar1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0226ff80 with catch @ 0226ffa4
                        */
  if (*(int *)(lVar4 + 0xe4) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0226ff24 with catch @ 0226ffa8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0226fef4 with catch @ 0226ffac
                        */
    thunk_FUN_0218fdac(lVar4);
                    /* try { // try from 0226ffb0 to 0236ffb7 has its CatchHandler @ 0226ffc0 */
    lVar4 = *(long *)puVar1;
  }
                    /* try { // try from 0226ffb8 to 0236ffc3 has its CatchHandler @ 0226fec0 */
  puVar3 = (undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x28);
  *puVar3 = uVar2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0226ffb0 with catch @ 0226ffc0
                        */
  thunk_FUN_02134474(puVar3,uVar2);
  lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
  *(undefined4 *)(lVar4 + 0x30) = param_1;
  *(undefined4 *)(lVar4 + 0x34) = param_2;
  *(undefined4 *)(lVar4 + 0x38) = param_3;
  *(undefined4 *)(lVar4 + 0x3c) = param_4;
  *(undefined4 *)(lVar4 + 0x40) = param_5;
  return;
}

