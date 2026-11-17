/* IL2CPP: Dino.BusSand.App.Meta.GiftPackCycle$$TryParseCycleTime
bool Dino_BusSand_App_Meta_GiftPackCycle__TryParseCycleTime (System_String_o* text, int32_t* field, int32_t* seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackCycle$$TryParseCycleTime
   bool Dino_BusSand_App_Meta_GiftPackCycle__TryParseCycleTime (System_String_o* text, int32_t*
   field, int32_t* seconds, const MethodInfo* method); */

undefined8
Dino_BusSand_App_Meta_GiftPackCycle__TryParseCycleTime_2232654
          (long param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uStack_24;
  
                    /* try { // try from 02332654 to 02432657 has its CatchHandler @ 02332660 */
                    /* try { // try from 02332658 to 02432663 has its CatchHandler @ 02331ecc */
                    /* catch() { ... } // from try @ 023323c0 with catch @ 02332660
                       catch() { ... } // from try @ 023324c4 with catch @ 02332660
                       catch() { ... } // from try @ 02332654 with catch @ 02332660 */
  *param_2 = 0;
  uStack_24 = 0;
  *param_3 = 0;
  uVar2 = System_String__IsNullOrWhiteSpace_46d20a0(param_1,0);
  if ((uVar2 & 1) == 0) {
    if (((param_1 == 0) || (lVar3 = System_String__Trim_46d6ee0(param_1,0), lVar3 == 0)) ||
       (lVar3 = System_String__Split_46d50c0(lVar3,0x2c,0,0), lVar3 == 0)) {
LAB_02332798:
                    /* WARNING: Subroutine does not return */
      FUN_02133224(0);
    }
    if ((*(int *)(lVar3 + 0x18) == 2) &&
       (uVar2 = System_Int32__TryParse_482de64(*(undefined8 *)(lVar3 + 0x20),param_2,0),
       (uVar2 & 1) != 0)) {
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      if (*(long *)(lVar3 + 0x28) == 0) goto LAB_02332798;
      uVar4 = System_String__Trim_46d6ee0(*(long *)(lVar3 + 0x28),0);
      uVar2 = System_Int32__TryParse_482de64(uVar4,&uStack_24,0);
      if (((uVar2 & 1) != 0) && (-1 < (int)uStack_24)) {
        if (0x3b < uStack_24 % 100) {
          return 0;
        }
        if (uStack_24 >> 7 < 0x753) {
          uVar1 = uStack_24 / 100 + (uStack_24 / 10000) * -100;
          if (uVar1 < 0x3c) {
            *param_3 = uStack_24 % 100 + (uStack_24 / 10000) * 0xe10 + uVar1 * 0x3c;
            return 1;
          }
          return 0;
        }
        return 0;
      }
    }
  }
  return 0;
}

