/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyReplay$$OpName
System_String_o* Dino_BusSand_App_Meta_Journey_JourneyReplay__OpName (int32_t op, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyReplay$$OpName
   System_String_o* Dino_BusSand_App_Meta_Journey_JourneyReplay__OpName (int32_t op, const
   MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_Journey_JourneyReplay__OpName_229952c(uint param_1)

{
  undefined8 *puVar1;
  
                    /* try { // try from 0239952c to 02499547 has its CatchHandler @ 02399628 */
  if ((bRam0000000004f9c211 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba30);
    FUN_02132f7c(PTR_DAT_04cb5750);
    FUN_02132f7c(PTR_DAT_04cabba8);
                    /* try { // try from 02399568 to 0249956b has its CatchHandler @ 02399620 */
                    /* try { // try from 0239956c to 02499613 has its CatchHandler @ 02398ecc */
    FUN_02132f7c(PTR_DAT_04cb5758);
    FUN_02132f7c(PTR_DAT_04cb5760);
    bRam0000000004f9c211 = 1;
  }
  puVar1 = (undefined8 *)PTR_DAT_04cb5750;
  if (param_1 < 4) {
    puVar1 = *(undefined8 **)(&UNK_049bb820 + (ulong)param_1 * 8);
  }
  return *puVar1;
}

